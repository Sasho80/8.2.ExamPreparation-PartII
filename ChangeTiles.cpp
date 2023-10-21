#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
	double collectedMoney;
	double width;
	double length;
	double side;
	double hight;
	double price;
	double sumMaster;
	cin >> collectedMoney>>width >> length >> side>> 
	 hight >> price >> sumMaster;
	double floorArea;
	double tileArea;
	double requiredTiles;
	double remainsTiles=5.0;
	double totalSum;
	floorArea = width * length;
	tileArea = (side * hight) / 2;
	requiredTiles =ceil(floorArea / tileArea);
	remainsTiles = requiredTiles + 5.0;
	totalSum = (remainsTiles * price) + sumMaster;
	cout << fixed<< setprecision(2);
	if (totalSum<=collectedMoney){
		cout << collectedMoney-totalSum<< 
			" lv " <<"left." << endl;
	}
	else{
		cout <<"You'll need " << totalSum-collectedMoney <<
			" lv " << "more." << endl;
	}
	return 0;
}