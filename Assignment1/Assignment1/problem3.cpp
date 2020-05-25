#include <iostream>
using namespace std;

int main()
{
	float number1, number2;
	float quotient = 0;

	cout << "Enter two numbers: ";
	cin >> number1 >> number2;
	if (number2 == 0) 
	{
		cout << "ERROR! CANNOT DIVIDE BY 0!";
	}
	else
	{
		quotient = number1 / number2;
		cout << quotient << endl;
	}
	
	return 0;
}