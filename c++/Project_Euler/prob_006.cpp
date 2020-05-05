#include <bits/stdc++.h>
using namespace std;

void solve_problem() {
	int n;
	cin >> n;
	
	int sum_of_square = n*(n+1)*(2*n+1) / 6;
	int square_of_sum = pow(n*(n+1)/2, 2);
	
	cout << square_of_sum - sum_of_square << endl;
}

int main () {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
	solve_problem();
}
