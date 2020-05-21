#include <iostream>
using namespace std;

int main() {
	cout << "Difference between 1^2 + 2^2 + ... + 100^2 and (1 + 2 + ... + 100)^2 is:\n";
	int sum1 = 0, sum2 = 0;
	for (int i = 1; i <= 100; i++) {
		sum1 = sum1 + i * i;
		sum2 += i;
	}
	int prod = abs(sum1 - sum2 * sum2);
	cout << prod << endl;
}