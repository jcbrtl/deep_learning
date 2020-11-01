import torch
import torch.nn as nn
import torch.nn.functional as F
import torch_geometric.nn as pyg_nn
from pytorch_lightning import LightningModule
from pytorch_lightning.metrics import Accuracy


class GNN(nn.Module):
    def __init__(self, depth=3):
        super().__init__()
        self.layers = nn.ModuleList([pyg_nn.GCNConv(10, 128)])
        for _ in range(depth-2):
            self.layers.append(pyg_nn.GCNConv(128, 128))
        self.layers.append(pyg_nn.GCNConv(128, 128))
        self.linear = nn.Linear(128, 101)

    def forward(self, x, edge_index, batch):
        for i in range(len(self.layers)-1):
            x = self.layers[i](x, edge_index)
            x = x.relu()
        x = self.layers[-1](x, edge_index)
        x = pyg_nn.global_mean_pool(x, batch)
        x = F.dropout(x, p=0.5, training=self.training)
        x = self.linear(x)
        return x


class GNNModule(LightningModule):
    def __init__(self, depth=3):
        super().__init__()
        self.model = GNN(depth)
        self.loss = nn.CrossEntropyLoss()
        self.val_accuracy = Accuracy()

    def forward(self, x, edge_index, batch):
        return self.model(x, edge_index, batch)

    def training_step(self, batch, batch_idx):
        out = self(batch.x, batch.edge_index, batch.batch)
        loss = self.loss(out, batch.y)
        self.log('train_loss', loss, on_step=False, on_epoch=True)
        return loss

    def validation_step(self, batch, batch_idx):
        out = self(batch.x, batch.edge_index, batch.batch)
        loss = self.loss(out, batch.y)
        acc = self.val_accuracy(out, batch.y)

        self.log('val_loss', loss, prog_bar=True)
        self.log('acc', acc, prog_bar=True)

    def configure_optimizers(self):
        optimizer = torch.optim.AdamW(self.model.parameters(), lr=1e-3)
        lr_scheduler = torch.optim.lr_scheduler.StepLR(optimizer,
                                                       step_size=50,
                                                       gamma=0.5)
        return {
            'optimizer': optimizer,
            'lr_scheduler': lr_scheduler,
        }
