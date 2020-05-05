#include <bits/stdc++.h>
using namespace std;

void solve_problem() {
	int A[20][20];
	for (int a=0; a<20; a++)
		for (int b=0; b<20; b++)
			cin >> A[a][b];
	
	int max_prod = -1;
	int max_down_prod = -1;
	int max_right_prod = -1;
	int max_diag_prod1 = -1;
	int max_diag_prod2 = -1;
	int prod;
	
	// up/down product
	for (int a=0; a<17; a++) {
		for (int b=0; b<20; b++) {
			prod = A[a][b] * A[a+1][b] * A[a+2][b] * A[a+3][b];
			max_down_prod = max(max_down_prod, prod); 
		}
	}
	
	// left/right product
	for (int a=0; a<20; a++) {
		for (int b=0; b<17; b++) {
			prod = A[a][b] * A[a][b+1] * A[a][b+2] *  A[a][b+3];
			max_right_prod = max(max_right_prod, prod);
		}
	}
	
	// diagonal product 1
	for (int a=0; a<17; a++) {
		for (int b=0; b<17; b++) {
			prod = A[a][b] * A[a+1][b+1] * A[a+2][b+2] * A[a+3][b+3];
			max_diag_prod1 = max(max_diag_prod1, prod);
		}
	}
	
	// diag product 2
	for (int a=0; a<17; a++) {
		for (int b=3; b<20; b++) {
			prod = A[a][b] * A[a+1][b-1] * A[a+2][b-2] * A[a+3][b-3];
			max_diag_prod2 = max(max_diag_prod2, prod);
		}
	}
	
	max_prod = max({max_down_prod, max_right_prod, max_diag_prod1, max_diag_prod2});
	
	cout << max_prod << "\n";
}

int main () {
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	
	solve_problem();
}
