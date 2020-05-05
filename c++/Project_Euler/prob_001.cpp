#include <bits/stdc++.h>
using namespace std;

void solve_problem() {
	int n;
	cin >> n;
	
	int sum = 0;
	for (int i=1; i<n; i++) {
		if (i%3==0 or i%5==0) sum += i;
	}
	cout << sum << endl;
}

int main () {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
	solve_problem();
}
