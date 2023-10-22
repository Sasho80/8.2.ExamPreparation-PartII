#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
	double chrysanthemum;
	double rose;
	double tulip;
	string season;
	char holiday;
	const double arrangement = 2.0;
	double price=0.0;
	cin >> chrysanthemum >> rose >> tulip;
	cin >> season;
	cin >> holiday;
	double sumFlowers = 0.0;
	sumFlowers=chrysanthemum + rose + tulip;
	if (season == "Spring" || season == "Summer") {
	price =chrysanthemum * 2.00 + rose * 4.10 +tulip * 2.50;
	if (holiday=='Y'){
		price += (price * 0.15);
	}
	if ((season == "Spring") && tulip > 7) {
		price -= price * 0.05;
	   }
	}
	else {
		price= chrysanthemum * 3.75 + rose * 4.50 + tulip * 4.15; 
		if (holiday=='Y'){
            price += (price * 0.15);
		}
		
		if ((season == "Winter") && rose >= 10) {
			price -= price * 0.1;
		}
	}
	cout << fixed << setprecision(2);
	if (sumFlowers > 20) {
		cout << (price-price*0.2)+arrangement<< endl;
	}
	else{
		cout<< price + arrangement << endl;
	}
	return 0;
}
