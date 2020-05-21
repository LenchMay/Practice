#include <iostream>
using namespace std;

int main() {
	int num = 0, result = 0, discharge = 1, i = 0;
	int res[1000];
	cout << "Transfer from the 10th number system to the 2nd system of value. Enter an integer:" << endl;
	cin >> num;
	do {
		res[i] = (num % 2);
		i++;
		num /= 2;
	} while (num > 0);
	for (i = i-1; i >= 0; i--) {
		cout << res[i];
	}
}