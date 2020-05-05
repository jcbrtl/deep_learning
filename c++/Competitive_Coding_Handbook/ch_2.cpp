#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	// If there are k-nested for loops then the complexity is O(n^k)
	
	// It only tells us the order of magnitude of running an algorithm, not the exact number
	// of times the code will be run.
	
	// If the algorithm consists of consecutive phases then the time complexity is the 
	// maximum of a single phase.
	
	// Recursion functions
	// Time complexity depens upon the number of times the function is called and the time
	// complexity of a single call. Total time is the product of these values. Example
	void f(int n) {
		if (n == 1) return;
		f(n-1);
	}
	// The above function makes n-1 function calls and time complexity of each call is O(1)
	// So total time complixty is O(n);
	
	// Example 2
	void g(int n) {
		if (n==1) return;
		g(n-1)
		g(n-1);
	}
	// The above function makes 2 * n-1 function calls and the time complexity of each call
	// is O(1). If we check the number of function calls manally we ge the patter for
	// g(n) called 1 time, g(n-1) called 2 times, g(n-2) called 4 times and so on which gives 
	// a sum of O(2^n)
	
	// Basic complexity classes
	// O(1) -> Runs in constant time. A typical constant-time algorithm is a direct formula that
	// 		   calculates the answer.
	// O(logn) -> A logratithmic algorithm halves the input space in half at each step. It is 
	//            base 2 as we are dividing the input space by half.
	// O(n^0.5) -> 
	// O(n) -> A linear algorithm goes through the input a constant number of times. This is often
	//         the best possible complexity as it the time needed to read an input before reporting
	//         reporting an answer.
	// O(nlogn) -> It indiciates that the algorithm possibly sorts the input as time complexity of
	//             efficient sorting algoritms is O(nlogn). Another possiblity is that it uses a data
	//             structure where each operation takes O(logn) time.
	// O(n^2) -> Often contains two nested loops.
	// O(n^3) -> Three nested loops
	// O(2^n) -> The time complexity often indicates that the algorithm iterates through all subsets
	//           of the input space.
	// O(n!) -> It indicates that the algorithm iterates through all permutations of the input space.
	
	// NP-hard problems are set of problems for which no polynomial algorithm is known.
	
	// Estimating Efficiency
	// Assume time limit is 1 second and input size
	// A modern computer can perform roughly 10^9 operations per second.
	// n <= 10    ->  O(n!)
	// n <= 20    ->  O(2^n)
	// n <= 500   ->  O(n^3)
	// n <= 5000  ->  O(n^2)
	// n <= 10^6  ->  O(nlogn) or O(n)
	// n is large ->  O(1) or O(logn)
	
	// Example of maximum subarray problem
	// Given an array of n numbers, find the maximum subarray sum.
	int A[] = {-1, 2, 4, -3, 5, 2, -5, 2};
	int n = 8;
	
	// Algorithm 1 O(n^3)
	// Go through all possible subarrays
	int best = 0;
	for (int a=0; a<n; a++) {	// starting index of subarray
		for (int b=a; b<n; b++) {  // ending index of subarray
			int sum = 0;
			for (int k=a; k<=b; k++) {
				sum += A[k];
			}
			best = max(best, sum);
		}
	}
	printf("%d\n", best);
	
	// Algorithm 2 -> O(n^2)
	int best2 = 0;
	for (int a=0; a<n; a++) {
		int sum = 0;
		for (int b=a; b<n; b++) {
			sum += A[b];
		}
		best2 = max(best, sum);
	}
	printf("%d\n", best2);
	
	// Algorithm 3 -> O(n)
	// Idea is to calculate for each array position the maximum sum of a subarry that ends
	// at that position.
	int best3 = 0;
	int sum = 0;
	for (int a=0; a<n; a++) {
		sum = max(A[a], sum+A[a]);
		best3 = max(best3, sum);
	}
	printf("%d\n", best3);
	
	// The anaylsis shows that all the algorithms are efficient when the input size is small,
	// but larger inputs bring out remarkable differences in the running times of the algorithms.
	
	
	
}
