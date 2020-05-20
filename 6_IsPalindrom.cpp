#include <iostream>
#include <string>
using namespace std;

bool IsPalindrom(string link) {
	string t;
	for (int i = link.size() - 1; i >= 0; --i)
		if (link[i] != ' ')
			t += link[i];
	if (t == link)
		return true;
	else
		return false;
}

int main() {
	string s;
	cout << "Check for a palindrome. Enter the string:" << endl;
	cin >> s;
	cout << IsPalindrom(s) << endl;
}
