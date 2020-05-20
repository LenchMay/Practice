#include <iostream>
using namespace std;

int main() {
	int num = 0, result = 0, discharge = 1;
	cout << "Transfer from the 10th number system to the 2nd system of value. Enter an integer:" << endl;
	cin >> num;
	do {
		result += (num % 2) * discharge;
		num /= 2;
		discharge *= 10;
	} while (num > 0);
	cout << result << endl;
}
