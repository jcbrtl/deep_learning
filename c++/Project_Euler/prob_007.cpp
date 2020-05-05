#include <bits/stdc++.h>
using namespace std;

void solve_problem() {
	int n=10001;
	
	int count = 0;
	int upper_limit = 1e6;
	int A[upper_limit+1] = {};
	
	for (int i=2; i<=upper_limit; i++) {
		if (A[i]==1) continue;
		
		count += 1;
		if (count == n) {
			printf("%d\n", i);
			break;
		}
		
		for (int j=2*i; j<=upper_limit; j=j+i) A[j]=1;
	}
	
	cout << "done" << endl;
}

int main () {
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	
	solve_problem();
}
