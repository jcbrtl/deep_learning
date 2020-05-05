#include <bits/stdc++.h>
using namespace std;

void solve_problem() {
	long long current_num = 0;
	long long next_num = 1;
	int num_factors;
	
	while (true) {
		current_num += next_num;
		num_factors = 0;
		
		for (int a=1; a<=sqrt(current_num); a++)
			if (current_num%a == 0) num_factors += 2;
		
		next_num++;
		if (num_factors > 500) break;
	} 
	
	cout << current_num << endl;
}

int main () {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	
	solve_problem();
}
