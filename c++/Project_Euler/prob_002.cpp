#include <bits/stdc++.h>
using namespace std;

void solve_problem() {
	int max_value = 4e6;
	int a=1, b=2;
	long long sum = 0;
	
	while (true) {
		if (b > max_value) break;
		if (b%2==0) sum += b;
		int temp = b;
		b = a + b;
		a = temp;
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
