// Standard Deviation
//

#include "pch.h"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main()
{
	double avg = 0;
	double data = 0;
	double total = 0;
	double totaldata = 0;
	double trials;
	int count = 0;
	cout << "Please enter how many trials" << endl;
	cin >> trials;
	cout << "Please enter the avg to minus" << endl;
	cin >> avg;

	for (int i = 0; i < trials; i++)
	{
		count++;
		cout << setprecision(10) << fixed;
		cout << "Please enter data value " << count << endl;
		cin >> data;
		totaldata = data + totaldata;
		double dataminusavg = (data - avg) * (data - avg);
		cout << "The result is: " << dataminusavg << endl;
		total = dataminusavg + total;
		cout << "The total is: " << total << endl;
		cout << "The total of the data is: " << totaldata << endl;
	}

	cout << endl << "*****************************" << endl << "Thank you for using the program!" 
		<< endl << "The total is: " << total << endl;
	cout << "The total of the data is: " << totaldata << endl;
	system("pause");
	return 0;
}

////////////////////////////////////////////////////////////