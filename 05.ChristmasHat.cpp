#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	cin >> n;
	int highHot = 2 * n + 5;
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
	for (int row = highHot-10; i < highHot - 5; row++) {
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
	for (int row = highHot - 2; row <= highHot; row++) {
		for (int k = 1; k <=lengthRow; k++){
			if (row==highHot-2){
				cout << '*';
			}
			else if (row == highHot - 1){
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
