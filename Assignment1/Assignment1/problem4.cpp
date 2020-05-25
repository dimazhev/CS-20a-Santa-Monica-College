#include <iostream>
using namespace std;

int main()
{
	int month, year, numberOfDays;
	int daysPerMonth[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	//The program will exit only upon entering invalid data
	while (true) {
		cout << "Enter a month (1-12) : ";
		cin >> month;
	
		if (month < 1 || month > 12)
		{
			cout << "ERROR! THE MONTH YOU HAVE CHOSEN IS INVALID" << endl;
			system ("pause");
			return 0;
		}

		cout << "Enter a year (0-2019) : ";
		cin >> year;

		if (year < 0 || year > 2019) {
			cout << "ERROR! THE YEAR YOU HAVE CHOSEN IS INVALID" << endl;
			system("pause");
			return 0;
		}

		if (daysPerMonth[month - 1] < 30) {
			if (year % 100 == 0) {
				if (year % 400 == 0) {
					daysPerMonth[month - 1] = 29;
				}
			}
			else if (year % 4 == 0) {
				daysPerMonth[month - 1] = 29;
			}
			else {
				daysPerMonth[month - 1] = 28;
			}
		}

		cout << "The " << month << " month of " << year << " has " << daysPerMonth[month - 1] << " days." << endl << endl;
	}

	return 0;
}