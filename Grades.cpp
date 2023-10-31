#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int numStudents;
	double examGrade;
	cin >> numStudents;
	double averageSucsses=0;
	double topStudents=0;
	double goodStudents = 0;
	double averageStudents = 0;
	double failStudents = 0;
	for (int i = 1; i <=numStudents; i++)
	{
		cin >> examGrade;
		if (examGrade>=5.00&&examGrade<=6.00)
		{
			double topNum=0;
			topNum++;
			topStudents += (topNum / numStudents)*100;
		}
		else if(examGrade >= 4.00 && examGrade <= 4.99)
		{
			double goodNum = 0;
			goodNum++;
			goodStudents += (goodNum / numStudents) * 100;
		}
		else if (examGrade >= 3.00 && examGrade <= 3.99)
		{
			double averageNum = 0;
			averageNum++;
			averageStudents += (averageNum / numStudents) * 100;
		}
		else if (examGrade >= 2.00 && examGrade <= 2.99)
		{
			double failNum = 0;
			failNum++;
			failStudents += (failNum / numStudents) * 100;
		}
		else {
			cout << "Wrong number" << endl;
		}
		averageSucsses += examGrade;
	}
	cout << fixed << setprecision(2);
	cout <<"Top students: " << topStudents << "%" << endl;
	cout <<"Between 4.00 and 4.99: " << goodStudents << "%" << endl;
	cout<<"Between 3.00 and 3.99: " << averageStudents << "%" << endl;
	cout<<"Fail: " << failStudents << "%" << endl;
	cout <<"Average: " << averageSucsses / numStudents << endl;
	return 0;
}