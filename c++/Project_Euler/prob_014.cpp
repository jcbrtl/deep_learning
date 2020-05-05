#include <bits/stdc++.h>
using namespace std;

void solve_problem() {
	long long num, count;
	int A[2000000] = {};
	A[1] = 1;
	
	for (int a=2; a<1e6; a++) {
		count = 0;
		num = a;

		while (num != 1) {
			num = num%2 ? 3*num+1 : num/2;
			
			count++;
			if (num < 2000000 && A[num] != 0) {
				A[a] = count + A[num];
				break;
			}
		}
	}
	
	int max_length = -1;
	int max_num = -1;
	for (int a=0; a<1e6; a++) {
		if (A[a]>max_length) {
			max_length = A[a];
			max_num = a;
		}
	}
	
	cout << max_num << "\n";
		
}

int main () {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	
	solve_problem();
}
