#include <bits/stdc++.h>
using namespace std;

void solve_problem() {
	int n=1000;
	int num_digits = ceil(n/3) + 1;
	int A[num_digits] = {};
	int num, carry;
	
	// Initialize array
	A[0] = 2;
	
	for (int a=1; a<n; a++) {
		carry = 0;
		for (int b=0; b<num_digits; b++) {
			num = A[b]*2 + carry;
			
			A[b] = num%10;
			carry = num/10;
		}
	}
	
	// Calculate sum
	int sum = 0;
	for (int a=0; a<num_digits; a++) sum += A[a];
	
	cout << sum << "\n";
	
	// Print the number
	//bool first_zero = true;
	//for (int a=num_digits-1; a>=0; a--) {
		//if (first_zero && A[a]==0) continue;
		//first_zero=false;
		//cout << A[a];
	//}
	//cout << "\n";
	
}

int main () {
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	
	solve_problem();
}
