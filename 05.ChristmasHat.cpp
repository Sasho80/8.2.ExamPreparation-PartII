#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	cin >> n;
	int highHat = 2 * n + 5;
	int lengthRow = 4 * n + 1;
	int halfLengthRow = (4 * n + 1) / 2 - 1;
	int dot=halfLengthRow;
	int line=0;
	int i = 0;
	/*first and second row*/
	for (int row = 1; row <= 2; row++) {
		for (int j = 1; j <= lengthRow; j++) {
			if (j == (halfLengthRow+1)&&(row==1)) {
				cout <<'/'<<'|'<< '\\';
				j += 2;
			}
			else if (j==(halfLengthRow+1)&&(row==2)) {
				cout << '\\' << '|' << '/';
				j += 2;
			}
			else{
				cout << '.';
			}
		}
		cout << endl;
	} 
	/*dynamic part*/
	for (int row = highHat-10; i < highHat - 5; row++) {
		cout << string(dot, '.');
		cout << '*';
		cout << string(line + i, '-');
		cout << '*';
		cout << string(line + i, '-');
		cout << '*';
		cout << string(dot, '.');
		cout << endl;
		i++;
		if (dot!=0){
			dot--;
		}
	}
	/*last three rows*/
	for (int row = highHat - 2; row <= highHat; row++) {
		for (int k = 1; k <=lengthRow; k++){
			if (row==highHat-2){
				cout << '*';
			}
			else if (row == highHat - 1){
				if (k%2!=0){
					cout << '*';
				}
				else {
					cout << '.';
				}
			}
			else{
				cout << '*';
			}
		}
		cout << endl;
	}
	return 0;
}
