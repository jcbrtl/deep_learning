#include <bits/stdc++.h>
using namespace std;

void solve_problem() {
	long long n, orig_value;
	cin >> n;
	orig_value = n;
	
	// Iteratively divide n starting from 2 and cancelling out all the factors.
	long long maxPrime = -1;
	
	// Remove all factors of 2
	while (n%2 == 0) {
		maxPrime = 2;
		n /= 2;
	}
	
	// Start with other numbers
	for (long long int i=3; i<sqrt(orig_value)+1; i=i+2) {
		while (n%i == 0) {
			maxPrime = i;
			n /= i;
		}
	}
	
	cout << maxPrime << endl;
	
}

int main () {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
	solve_problem();
}
