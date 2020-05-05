#include <bits/stdc++.h>
using namespace std;

void solve_problem() {
	int A[1002] = {};
	int carry, num=1, temp, digit;
	bool found = false;
	A[0] = 1;
	
	while (true) {
		
		
		for (int a=1001; a>=0; a--) {
			if (A[a] != 0) {
				if (a+1 == 1000) {
					found = true;
					break;
				}
			}
		}
		num++;
		if (found==true) break;
	}
	
	cout << num << "\n";
}

int main () {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	
	solve_problem();
}
