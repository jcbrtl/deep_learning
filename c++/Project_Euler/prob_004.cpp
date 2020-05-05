#include <bits/stdc++.h>
using namespace std;

bool check_pallindrome(string s) {
	for (unsigned int a=0; a<s.size()/2; a++) 
		if (s[a] != s[s.size()-a-1]) return false;
	return true;
}

void solve_problem() {
	int max_product = -1;
	int product;
	
	for (int a=999; a>=800; a--) {
		for (int b=999; b>=800; b--) {
			product = a*b;
			if (check_pallindrome(to_string(product))) 
				max_product = max(max_product, product);
		}
	}
	
	cout << max_product << endl;
}

int main () {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	
	solve_problem();
}
