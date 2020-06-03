#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Finding the greatest common factor. Enter two integers separated by spaces:" << endl;
	cin >> a >> b;
	do {
		if (abs(a) > abs(b))
			a %= b;
		else
			b %= a;
	} while (a != 0 && b != 0);
	cout << a + b << endl;
	return 0;
}
