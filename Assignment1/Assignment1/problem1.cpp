#include <iostream>
using namespace std;

int main()
{
	double westCoastSales, totalSales;
	
	cout << "Please Enter Total Sales: ";
	cin >> totalSales;

	westCoastSales = totalSales * .58;

	cout << "Predicted West Coast Sales: " << westCoastSales << endl;

	return 0;
} 