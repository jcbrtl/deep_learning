#include <bits/stdc++.h>
using namespace std;

void solve_problem() {
	int n = 100, carry, num;
	int A[2*n] = {};
	A[1] = 1;
	
	for (int a=2; a<=n; a++) {
		carry = 0;
		for (int b=0; b<2*n; b++) {
			num = A[b]*a + carry;
			A[b] = num%10;
			carry = num/10;
		}
	}
	
	int sum = 0;
	for (int a=0; a<2*n; a++) sum += A[a];
	cout << sum << "\n";
}

int main () {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	
	solve_problem();
}
