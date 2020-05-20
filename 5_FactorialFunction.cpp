#include <iostream>
#include <math.h>
using namespace std;

int Factorial(int num) {
	if (num < 2) {
		return 1;
	}
	else {
		int result = 1;
		for (int i = 2; i <= num; i++) {
			result *= i;
		}
		return result;
	}
}

void main() {
	int num;
	cout << "Factorial numbers. Enter a number not exceeding 10 in absolute value:" << endl;
	do {
		cin >> num;
	} while (abs(num) > 10);
	cout << Factorial(num) << endl;
}