#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int years = 0, i;
	double seaLevelRise = 1.5, currentLevel = 1.5;
	while (years <= 2)
	{
		cout << "Enter a value(> 2) : ";
		cin >> years;
		if (years <= 2)
		{
			cout << "INVALID!" << endl;
		}
	}
	cout << "Years | Sea level rise" << endl;
	cout << "-----------------------" << endl;
	cout << setprecision(1) << fixed;
	for (i = 1; i < years; i++)
	{
		cout << setw(5) << i << " | " << setw(4) << currentLevel << "mm" << endl;
		currentLevel += seaLevelRise;
	}


	return 0;
}