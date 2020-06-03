#include <iostream>
using namespace std;

int main() {
	int a, b, c, prod = 1;
	cout << "a < b < c\ta^2 + b^2 = c ^2\ta + b + c = 1000\tFind a * b * c\n\n";
	for (a = 1; a <= 998; a++) {
		for (b = 1; b <= 998; b++) {
			for (c = 1; c <= 998; c++) {
				if ((a < b) && (b < c) && (a * a + b * b == c * c) && (a + b + c == 1000)) {
					prod = a * b * c;
					cout << "a = " << a << " b = " << b << " c = " << c << endl;
				}
			}
		}
	}
	
	cout << "a * b * c = " << prod << endl;
	return 0;
}
