//#include <iomanip>
//#include <iostream>
//#include <string>
//using namespace std;
//
//void fillAndPrintArray(string numberString)
//{
//	int length = numberString.length();
//	int * array = new int[2 * length];
//
//	for (int i = 0; i < length; i++)
//	{
//		array[i] = array[2 * length - 1 -i] = numberString.at(i) - '0';
//	}
//	
//	cout << "Digits in Array: ";
//	for (int i = 0; i < 2 * length; i++) 
//	{
//		cout << "[" << array[i] << "] ";
//	} cout << endl;
//}
//
//int main()
//{
//	string numberString;
//	cout << "Input (>0): ";
//	cin >> numberString;
//	while (atoi(numberString.c_str()) <= 0)
//	{
//		cout << "invalid! Try again: ";
//		cin >> numberString;
//
//	}
//	fillAndPrintArray(numberString);
//
//	system("pause");
//	return 0;
//}
//
