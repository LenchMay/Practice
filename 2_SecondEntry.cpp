#include <iostream>
#include <string>
using namespace std;

int main() {
	string line;
	int position = -2;
	cout << "Finding the second occurrence of the letter \"f\". Enter the word:" << endl;
	cin >> line;
	int size = line.size();
	for (int i = 0; i < size; ++i) {
		if (line[i] == 'f' || line[i] == 'F') {
			++position;
			if (position == 0) {
				position = i;
				break;
			}
		}
	}
	cout << position << endl;
	return 0;
}
