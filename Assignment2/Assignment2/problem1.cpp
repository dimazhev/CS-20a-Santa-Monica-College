#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int sum = 0, number = 0, i;
	while (number <= 0) {
		cout << "Enter a Positive number: ";
		cin >> number;
		if (number <= 0) {
			cout << "Invalid!" << endl;
		}
	} for (i = 1; i <= number; i++)
	{
		sum += i;
	} cout << "Sum: " << sum << endl;

	return 0;

}
