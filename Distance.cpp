#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int firstSpeed, firstTime, secondTime, thirdTime;
	double hour;
	const double minutesPerHour=60;//1hour=60min
	cin >> firstSpeed >> firstTime >> secondTime >> thirdTime;
	double intermedDistance = (double)(firstSpeed + firstSpeed * 0.1);
	double DistanceFirst, DistanceIncrease, DistanceReduction;
	double totalTravel;
	hour =(double) firstTime /minutesPerHour;
	DistanceFirst = (double)firstSpeed * hour;
	hour = (double)secondTime / minutesPerHour;
	DistanceIncrease = intermedDistance* hour;
	hour = (double)thirdTime / minutesPerHour;
	DistanceReduction = (intermedDistance-intermedDistance*0.05)
	 * hour;
	totalTravel = DistanceFirst + DistanceIncrease + DistanceReduction;
	cout << fixed;
	cout << setprecision(2) << totalTravel << endl;
	return 0;
}