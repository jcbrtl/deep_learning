#include <bits/stdc++.h>
using namespace std;

int main () {
	// Standard streams are used for input and output. In C++ the
	// standard streams are `cin` and `cout`. Also, `scanf` and
	// `printf` can be used.
	int a, b;
	string x;
	cin >> a >> b >> x;

	// The above code will work for all the cases assuming there is
	// atleast one space or newline between each element in the input.
	cout << a << " " << b << " " << x << "\n";

	// Generally input and output is a bottleneck in the program. Add
	// the following lines to the beginning of the code to make the
	// input and output more efficient.
	ios::sync_with_stdio(0);
	cin.tie(0);

	// To read and print input using scanf and print
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d %d\n", a, b);

	// If you have to read a while line from input, possibly containing
	// spaces.
	string s;
	getline(cin, s);

	// If the amount fo data is unknown, the following loop is useful.
	// This loop reads elements from the input one after another, until
	// there is no more data available in the input.
	string x;
	while (cin >> x) {
		 code
	}

	// If you are given some file to read input from and print the output to
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	// Working with numbers
	// Integers
	// It is 32-bit type with value in range form -2^31 to 2^31-1 or about -2x10^9 to 2x10^9.
	// If int type is not long enough you can use `long long`. It has a value range from
	// -2^64 to 2^63-1 or about -9x10^18 to 9x10^18.
	long long x = 123456789123456789LL;
	// The suffix LL just means that the type of the number is long long.

	// A common mistake when using long long is when you are still using int somewhere in code.
	int a = 123456789;
	long long b = a*a;
	cout << b << endl;	// -1757895751
	// Here although b is of type long long but the result of a*a will be int as a is of type int.
	// To solve the above problem use long long a or
	long long b = (long long) a*a;

	// There is also 129-bit integer although you never require this is competitive programming
	// going from -10^38 to 10^38.
	__int128_t x = 1234;
	// However printing the output would result in compile error as there is no support for that.
	
	// Modulo
	// In many cases when the output is large you are asked to give the output as modulo. An
	// important property to note is that you can actually take the modulo before doing all the
	// operations (addition, subtraction, multipication). Doing this ensures that the output never
	// grows too large.
	// If there are subtractions involved then the result can get negative and the modulo in
	// C++ will give negative numbers, so to counter that add M to your answer, if it is less than 0.
	
	// Floating Point Numbers
	// 64-bit double (enough for most cases)
	// 80-bit long double (more accurate)
	// To print a answer to required decimal places use .x notation in printf.
	double x = 1.12345678;
	printf("%.3f\n", x);
	
	// Due to round off errors it is risky to compare two floating point numbers when using == operator.
	// A better way to check for equality is by comparing the difference between them and checking if
	// the difference is less than some epsilon.
	if (abs(a-b) < 1e-9) {
		// a and b are equal
	}
	
	// Shortening code i.e. writing type names
	typedef long long ll;
	ll a = 12345;
	printf("%lld", a);
	
	typedef vector<int> vi;
	typedef pair<int, int> pi;
	
	// Macros can also be used. Macros means certain strings in the code will be changed before the
	// compilation
	#define PB push_back
	#define MP make_pair
	v.push_back(MP(x1,y1))
	
	#define REP(i, a, b) for (int i=a; i <=b; i++)
}
