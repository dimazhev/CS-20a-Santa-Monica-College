#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double mealCharge, salesTax, tip, total;

	cout << "Enter Meal Charge: ";
	cin >> mealCharge;

	salesTax = mealCharge * 0.0975;
	tip = (mealCharge + salesTax) * 0.20;
	total = mealCharge + salesTax + tip;
	
	cout << setprecision(2) << fixed << showpoint;
	cout << "Sales Tax : $ " << setw(5) << salesTax << endl;
	cout << "Tip (20%) : $ " << setw(5) << tip << endl;
	cout << "Total     : $ " << setw(5) << total << endl;





	return 0;
} 