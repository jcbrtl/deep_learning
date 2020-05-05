#include <bits/stdc++.h>
using namespace std;

int main() {
	// 1. Data Structures
	// It is a way to store data in memory of a computer.
	
	// Dynamic arrays
	// It is an array whose size can be changed during the execution of the program.
	// Vector can be used with number indexing.
	vector<int> v;
	v.push_back(3);
	
	for (unsigned int i=0; i<v.size(); i++) 
		cout << v[i] << "\n";
		
	// Shorter way to iterate
	for (auto x: v)
		cout << x << "\n";
	
	// Other useful functions unclude .back() to get last element, .pop_back() removes
	// last element.
	vector<int> v(10); // size 10 vector with value 0 as default
	vector<int> v(10,5); // size 10 vector with value 5 as default
	
	// Internally a vector is implemented as an array. If the size grows larger than the
	// size then a new array is allocated and all the elements are moved to the new array.
	
	
	// 2. Strings
	// String structure is also a dynamic array that can be used almost like a vector.
	// Use + symbol to combine strings, substr(k,x) returns the substring that begins at
	// position k and has length x, find(t) gets the first occurence of substring t.
	
	
	// 3. Set 
	// It maintains a collection of elements. C++ has two set implementations `set` based
	// on a balanced binary tree and its tree operations work in O(logn) time and 
	// `unordered_set` uses hashing, and its operations work in O(1) time on average.
	
	// `set` maintains the order of elements and also every element in the set is unique.
	set<int> s;
	s.insert(3);
	s.insert(2);
	s.insert(5);
	s.insert(5);
	cout << s.count(3) << "\n";	// count will return either 0 or 1
	cout << s.count(5) << "\n";
	s.erase(3);
	cout << s.count(3) << "\n";
	
	// set behaves like a vector without having the [] notation
	set<int> s = {2, 5, 6, 8};
	cout << s.size() << "\n";
	for (auto x: s)
		cout << x << "\n";
	
	// `unordered_set`, `multiset` behave like sets but they can contain multiple instances
	// of an element.
	multiset<int> s;
	s.insert(5);
	s.insert(5);
	cout << s.count(5) << "\n";
	// .erase() will remove all instances of the element. If a single instance needs to be
	// remove use .erase(s.find(5))
	
	
	// 4. Map
	// A map is a generalized array that consists of key-value-pairs. There are two implementations
	// in C++ `map` that is based on a balanced binary tree and accessing elements take O(logn) time,
	// while `unordered_map` uses hashing and accessing elements takes O(1) time on average.
	map<string, int> m;
	m["monkey"] = 4;
	m["banana"] = 3;
	cout << m["banana"] << "\n";
	cout << m["chimp"] << "\n"; // default value of 0 is used
	cout << m.count("dog") << "\n"; // returns if a key exist or not
	
	// to access all values
	for (auto x: m) {
		x.first, x.second
	}
	
	// 5. Iterators and ranges
	// An iterator is a variable that points to an element in a data structure. `begin` and `end` 
	// iterator define a range that contains all elements in a data structure.
	sort(v.begin(), v.end())
	reverse(v.begin(), v.end())
	random_shuffle(v.begin(), v.end())
	
	// create iterator over a set
	set<int>::iterator it = s.begin();
	// a shorter way is
	auto it = s.begin();
	// to access an element use * operator
	*it;
	// to move the iterators use ++, --
	it++;
	for (auto it=s.begin(), it!=s.end(), it++) {
		break;
	}
	
	// 6. Bitset
	// It is an array whose each value is either 0 or 1. Also, this makes it easy to use bitwise
	// operators liek &, |, ^
	bitset<10> s;
	s[1] = 1;
	bitset<10> s(string("0010011010"));
	
	s.count()  // returns the numbre of ones in the bitset
	
	// 7. Deque
	// A deque is a dynamic array whose size can efficiently changed at both ends of an array.
	deque<int> d;
	d.push_back(5);
	d.push_back(2);
	d.push_front(3);
	d.pop_front();
	d.pop_back();
	// Adding and removing requires O(1) time but for other use it is slower than a vector.
	
	// 8. Stack
	// O(1) time to add and remove element from the top
	stack<int> s;
	s.push(3);
	s.push(2);
	s.top();
	s.pop();
	
	// 9. Queue
	// O(1) time to add element to the end adn remove first element.
	queue<int> q;
	q.push(3);
	q.push(2);
	q.pop()
	q.front();
	
	// 10. Priority queue
	// It supports insertion and depending on the type of the queue, retrieval and removal of either
	// the minimum and maximum element. Insertion and removal take O(logn) and retrieval take O(1).
	priority_queue<int> q;  // by default prioirty_queue sorted in decreasing
	q.push(3);
	q.push(5);
	q.top()
	q.pop()
	
	// to create increasing queue
	priority_queue<int, vector<int>, greater<int>> q;
	
	// 11. Policy-based data strcuture
	// g++ compiler supports some data structures that are not part of the C++ standard library. Such
	// strcutures are called policy-based data structures. To use these structures add these lines
	#include <ext/pb_ds/assoc_container.hpp>
	using namespace __gnu_pbds;
	
	// To define an `indexed_set` that is a set with numbered indexing
	typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
	indexed_set s;
	s.insert(2);
	// .find_by_order(2) -> returns the third inserted item
	// .find_by_key(8) -> returns position of a given element. If not available then the possible position
	// in the sorted array.
	
}
