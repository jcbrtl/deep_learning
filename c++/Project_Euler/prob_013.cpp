#include <bits/stdc++.h>
using namespace std;

void solve_problem() {
	int sum[56] = {};
	string num;
	int carry, temp;
	
	for (int a=0; a<100; a++) {
		cin >> num;
		reverse(num.begin(), num.end());
		
		carry = 0;
		for (int b=0; b<56; b++) {
			if (b>=50) {
				temp = sum[b] + carry;
				sum[b] = temp%10;
				carry = temp/10;
			}
			else {
				temp = sum[b] + num[b]-48 + carry;
				sum[b] = temp%10;
				carry = temp/10;
			}
		}
	}
	
	for (int a=55; a>=0; --a) cout << sum[a];
	cout << endl;
	
}

int main () {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	
	solve_problem();
}
