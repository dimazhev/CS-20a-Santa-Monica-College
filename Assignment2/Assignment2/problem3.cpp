#include <iostream>
#include <iomanip>
using namespace std;
int promptOption();
void withdraw(float &balance);
void deposit(float &balance);

int main()
{
	float amount, balance;
	cout << "Open Account" << endl;
	cout << "How much would you like to deposit? (at least $20): ";
	cin >> amount;
	while (amount < 20) {
		cout << "Invalid" << endl;
		cout << "Enter a value (at least $20): ";
		cin >> amount;
	} balance = amount;
	int option = promptOption();
	while (option != 0)
	{
		if (option == 1)
		{
			deposit(balance);
		}
		else if (option == 2) {
			withdraw(balance);
		}
		
		else if (option == 3) {
			cout << setprecision(2) << fixed << "Balance: $" << balance << endl;
		}
		option = promptOption();
	}
	cout << "Goodbye!" << endl;
	return 0;
}

int promptOption()
{
	int option;
	cout << "Menu" << endl;
	cout << "1 Deposit Money" << endl;
	cout << "2 Withdraw Money" << endl;
	cout << "3 View Balance" << endl;
	cout << "0 exit" << endl;
	cout << "Select an option : ";
	cin >> option;
	while (option < 0 || option > 3)
	{
		cout << "Invalid!" << endl;
		cout << "select an Option: ";
		cin >> option;
	}
	return option;
}

void deposit(float &balance)
{
	float amount;
	cout << "--DEPOSIT--" << endl;
	cout << "Amount: ";
	cin >> amount;
	while (amount <= 0) {
		cout << "Invalid!" << endl;
		cout << "Enter an amount larger than 0: ";
		cin >> amount;
	}
	balance += amount;
}

void withdraw(float &balance)
{
	float amount;
	cout << "--WITHDRAWAL--" << endl;
	cout << "Amount: ";
	cin >> amount;
	while (amount <= 0) {
		cout << "Invalid!" << endl;
		cout << "Enter an amount larger than 0: ";
		cin >> amount;
	}
	balance -= amount;
}