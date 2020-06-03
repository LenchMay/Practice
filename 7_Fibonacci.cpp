#include <iostream>
using namespace std;

int main() {
	int num1 = 1;
	int num2 = 2;
	int sum = 2;
	do {
		num1 += num2;
		num2 += num1;
		if (num1 % 2 == 0)
			sum += num1;
		if (num2 % 2 == 0)
			sum += num2;
	} while (num2 < 4000000);
	std::cout << sum << endl;

	return 0;
}
