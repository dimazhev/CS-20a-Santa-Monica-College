#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int recursive(int n)
{
	if (n <= 0) {
		return 1;
	}
	else {
		return n * recursive(n / 3);
	}
	
}


int main()
{
	int input;
	cout << "Input: ";
	cin >> input;
	while (input <= 0) {
		cout << "Please enter a positive Integer: ";
		cin >> input;
	}
	cout << "Answer: " << recursive(input);


	return 0; 
}