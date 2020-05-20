#include <iostream>
#include <math.h>

using namespace std;

int main() {
	double a, b, c, D = 0;
	cout << "Enter the parameters of the quadratic equation ax^2 + bx + c = 0 with a space" << endl;
	cin >> a >> b >> c;
	if (a == 0) {
		double x1 = -c / b;
		cout << x1 << endl;
	} else {
		D = b * b - 4 * a * c;
		if (D > 0) {
			double x1 = (-b + sqrt(D)) / (2 * a);
			cout << x1 << " ";
			double x2 = (-b - sqrt(D)) / (2 * a);
			cout << x2 << endl;
		}
		else if (D == 0) {
			double x1 = (-b + sqrt(D)) / (2 * a);
			cout << x1 << endl;
		}
		else {
			cout << endl;
		}
	}
}