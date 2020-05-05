#include <bits/stdc++.h>
using namespace std;

vector<int> get_prime_array(int n) {
	vector<int> primes;
	
	int A[n+1];
	for (int i=2; i<=n; i++) {
		// If cmposite pass the iteration
		if (A[i]==1) continue;
		
		// The number i is prime
		primes.push_back(i);
		
		// Remove all multiple of i
		for (int j=2*i; j<=n; j=j+i) A[j]=1;
	}
	
	return primes;
}

void solve_problem() {
	int n;
	cin >> n;
	
	long long sum = 0;
	vector<int> primes = get_prime_array(n);
	
	for (unsigned int i=0; i<primes.size(); ++i) sum += primes[i];
	
	cout << sum << endl;
		
}

int main () {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
	solve_problem();
}
