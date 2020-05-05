#include <bits/stdc++.h>
using namespace std;

void solve_problem() {
	for (int a=1; a<1000; a++) {
		for (int b=a; b<1000; b++) {
			for (int c=b; c<1000; c++) {
				if (a+b+c == 1000 && pow(a,2)+pow(b,2)==pow(c,2)) {
					cout << a*b*c << endl;
					return;
				}
			}
		}
	}
}

int main () {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
	solve_problem();
}
