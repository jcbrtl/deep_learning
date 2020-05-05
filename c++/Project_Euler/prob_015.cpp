#include <bits/stdc++.h>
using namespace std;

void solve_problem() {
	int n = 20;
	unsigned long long ans = 1;
	
	int upper=2*n, lower=n;
	
	for (int a=1; a<=lower; a++) ans *= (upper-lower+a)/a;
	
	cout << ans << "\n";
	
}

int main () {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	
	solve_problem();
}
