#include <iostream>
using namespace std;
int main() {
	char startLetter;
	char endLetter;
	char exeptLetter;
	int counter = 0;
	cin >> startLetter >> endLetter >> exeptLetter;
		if (!((startLetter >= 'a' && startLetter <= 'z') &&
			(endLetter >= 'a' && endLetter <= 'z') &&
			(exeptLetter >= 'a' && exeptLetter <= 'z'))) {
			cout << "Wrong enter!" << endl;
		}
        else if ((startLetter == endLetter) && (endLetter == exeptLetter)) {
			cout << "Wrong enter!" << endl;
		}
		else if (startLetter > endLetter) {
			cout << "Wrong enter!" << endl;
		}
		else {
		for (char i = startLetter; i <= endLetter; i++) {
			if (i == exeptLetter) {
				i++;
			}
			for (char j = startLetter; j <= endLetter; j++) {
				if (j == exeptLetter) {
					j++;
				}
				for (char k = startLetter; k <= endLetter; k++) {
					if (k == exeptLetter) {
						k++;
					}
					cout << i << j << k << ' ';
					counter++;
				}
			}
			if (i == endLetter) {
				cout << counter << endl;
			}
		}
	}
	return 0;
}
