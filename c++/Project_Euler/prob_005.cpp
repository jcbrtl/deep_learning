#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
	if (a==0) return b;
	return gcd(b%a, a);
}

long long lcm(long long a, long long b) {
	return a*(b/gcd(a, b));
}

void solve_problem() {
	int n=20;
	//cin >> n;
	
	long long ans = 1;
	for (long long i=2; i<=n; i++) ans=lcm(ans, i);
	
	cout << ans << endl;
}

int main () {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	
	solve_problem();
}
