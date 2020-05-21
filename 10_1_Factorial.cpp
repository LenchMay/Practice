#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int* fact(int, int*);

int main()
{
	setlocale(LC_ALL, "Russian");

	int k, sum = 0;
	int m[5000] = { 0 };
	m[0] = 1;
	cout << "Enter the number:\n";
	cin >> k;

	fact(k, m);

	bool c = true;
	for (int i = 4999; i >= 0; i--)
	{
		if (m[i] == 0 && c == true)
			continue;
		c = false;
		sum += m[i];
	}
	cout << "The sum of the digits of the factorial of this number is: " << sum << endl;
}

int* fact(int s, int f[])
{
	if (s == 1) return f;

	fact(s - 1, f);

	for (int i = 0; i < 5000; i++)
		f[i] *= s;
	for (int i = 0; i < 4999; i++)
		if (f[i] >= 10)
		{
			f[i + 1] += f[i] / 10;
			f[i] = f[i] % 10;
		}
	return f;
}