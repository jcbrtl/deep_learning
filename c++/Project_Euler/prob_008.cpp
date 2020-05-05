#include <bits/stdc++.h>
using namespace std;

void solve_problem() {
	string pi = "";
	string t;
	int n;
	for (int i=0; i<20; i++) {
		cin >> t;
		pi.append(t);
	}
	cin >> n;
	
	long long max_product = -1;
	long long product = 1;
	int last_value;
	
	// Get product of first n digits
	for (int i=0; i<n; ++i) product *= pi[i]-48;
	
	last_value = pi[0]-48;
	max_product = product;
	
	// Go through rest of the digitis
	for (unsigned int i=n; i<pi.size(); ++i) {
		long long num = pi[i]-48;
		
		// Divide by last value
		if (last_value == 0) {
			// Compute the product again from [i-n,i]
			product = 1;
			for (unsigned int j=i; j>i-n; --j) product *= (long long)pi[j]-48;
		}
		else {
			product = (long long)product / last_value;
			
			// Multiply by current value
			product *= num;
		}
		
		last_value = pi[i-n+1]-48;
		
		// Compare the results
		max_product = max(max_product, product);
	}
	
	cout << max_product << endl;
}

int main () {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
	solve_problem();
}
