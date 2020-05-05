#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	// Given an array that contains an elements, your task is to sort the elements in increasing
	// order.
	
	// O(n^2) algorithms -> two for loops
	// Bubble sort
	// Go n rounds and whenever two consecutive elements are not sorted swap them
	int n = 8;
	int A[n] = {1, 3, 8, 2, 9, 2, 5, 6};
	
	for (int a=0; a<n; a++) {
		for (int b=0; b<n-1; b++) {
			if (A[b] > A[b+1]) {
				swap(A[b], A[b+1]);
			}
		}
	}
	
	//for (int a=0; a<n; a++) printf("%d ", A[a]);
	
	// O(nlogn) algorithms
	// Merge Sort
	// If subarray is of size 1 stop iteration. Else find the middle and sort the left side and 
	// right side. After that merge the results. 
	
	// If we only rely on comparisons for sorting our array then O(nlogn) is the best possible
	// solution. But ig we do not compare array elements and use some other information it is 
	// possible to get O(n) also.
	
	// O(n) algorithms
	// Counting Sort
	// Assuming every element is between [0,C]. Maintain an array of length C and for each array
	// element increment the value in array. This algorithm can be used when the number of elements
	// in the array are samll enough to have a bookkeeping array.
	
	// Using C++ sort function
	// Sort a vector
	vector<int> v = {4, 2, 5, 3, 5, 8, 3};
	sort(v.begin(), v.end());
	
	for (auto i = v.begin(); i != v.end(); ++i) cout << *i << " ";
	cout << endl;
	
	// Sort an array
	int n = 7;
	int a[] = {4, 2, 5, 3, 5, 8, 3};
	sort(a, a+n);
	
	for (int i=0; i<n; i++) cout << a[i] << " ";
	
	// Sort a string
	string s = "monkey";
	sort(s.begin(), s.end());
	cout << "\n" << s << "\n";
	
	// The sort function uses a comparison operator to compare two elements. Most C++ data types have
	// a built-in comparison operator, and elements of these types can be sorted automatically.
	
	// Sort a pair
	// Pairs are sorted according to their first element (first). If the first element is equal then
	// they ae sorted according to their second element.
	vector<pair<int, int>> v;
	v.push_back({1,5});
	v.push_back({2,3});
	v.push_back({1,2});
	sort(v.begin(), v.end());
	
	for (unsigned int i=0; i<v.size(); i++) 
		printf("{%d, %d} ", v[i].first, v[i].second); 
	
	// Sort a tuple
	vector<tuple<int,int,int>> v;
	v.push_back({2,1,4});
	v.push_back({1,5,3});
	v.push_back({2,1,3});
	sort(v.begin(), v.end());
	
	for (unsigned int i=0; i<v.size(); i++)
		printf("{%d, %d, %d} ", get<0>(v[i]), get<1>(v[i]), get<2>(v[i]));
		
	// Sort User-defined structures
	// They do not have a comparison operator automatically. The operator should be defined inside the
	// struct as a function `operator<` whose parameter is another element of the same type. The operator
	// should return `true` if the element is smaller than the parameter, and `false` otherwise.
	// Example sort (x,y) points
	struct P {
		int x, y;
		
		bool operator<(const P &p) {
			if (x!=p.x) return x < p.x;
			return y < p.y;
		}
	};
	
	// An external function can also be given to the sort function
	bool cmp(string, a, string b) {
		if (a.size() != b.size()) return a.size() < b.size();
		return a < b;
	sort(v.begin(), v.end(), comp);
	
	// Element Search
	// Standard Search -> O(n)
	// It is best if the array is not sorted
	for (int i=0; i<n; i++) {
		if (array[i] == x) {
			 // x found at index i
		}
	}
	
	// Binary Search -> O(logn)
	// Best if the array is sorted
	// Method 1 -> Iterate from the middle
	int n = 8, x = 8;
	int A[] = {1, 2, 3, 4, 5, 6, 7};
	bool found = false;
	
	int a = 0, b = n-1;
	while (a <= b) {
		int middle = (a+b)/2;
		if (A[middle] == x) {
			found = true;
			break;
		}
		if (A[middle] > x) b = middle-1;
		else a = middle+1;
	}
	printf("%s", found ? "true" : "false");
	
	// Method 2 -> Effective way to iterate through the elements of array using jumps of 
	// decreasing size. Go from left to right, and start with jump size of n/2.
	int k = 0;
	int n = 8, x = 7;
	int A[] = {1, 2, 3, 4, 5, 6, 7};

	for (int b=n/2; b>=1; b/=2) {
		while (k+b < n && A[k+b] <= x) k += b;
	}
	if (A[k] == x) printf("found");
	
	// C++ functions (works on sorted array)
	// `lower_bound` -> returns pointer to the first array element whose value is at least `x`
	// 'upper_bound` -> returns pointer to the first array element whose value is larger than `x`
	// `equal_range` -> returns both the above pointers
	int n = 8;
	int A[n] = {1, 2, 3, 4, 5, 6, 7 ,8};
	int x = 7;
	
	auto k = lower_bound(A, A+n, x) - A;
	printf("%s", k<n && A[k]==x ? "found" : "not found");
	
	// Code to count the number of elements whose value is x 
	auto a = lower_bound(A, A+n, x);
	auto b = upper_bound(A, A+n, x);
	cout << b - a << "\n"; 
	
	auto r = equal_range(A, A+n, x);
	cout << r.second - r.first << "\n";
	
	// An important use of binary search is to find the position where the value of a function
	// changes. Suppose we want to find the smallest value `k` that is valid solution for a problem.
	// Do a binary search where the upper bound is a value that you know gives valid solution.
	int x = -1;
	for (int b=z; b>=1; b/=2) {
		while (!check_function(x+b)) x+= b;
	}
	int k = x + 1;
	
	// Binary search can also be used to find the maximum value for a function that is first increasing
	// and then decreasing.
	int x = -1;
	for (int b=z; b>=1; b/=2) {
		while (f(x+b) - f(x+b+1)) x += b;
	}
	int k = x+1
}
