//#include <iomanip>
//#include <iostream>
//#include <string>
//using namespace std;
//
//int char_counter(string array[], int size, char target)
//{
//	int counter = 0;
//	string entry; 
//	for (int i = 0; i < size; i++)
//	{
//		entry = array[i];
//		for (int k = 0; k < entry.length(); k++)
//		{
//			if (target == entry[k])
//			{
//				counter++;
//			}
//		}
//	}
//
//	//return counter;
//}
//
//int main()
//{
//	char target;
//	const int SIZE = 5;
//	string entered_items[SIZE];
//
//	cout << "Enter 5 Items" << endl;
//	for (int i = 0; i < 5; i++) {
//		cout << "Item " << i + 1 << " : ";
//		getline(cin, entered_items[i]);
//	} 
//	cout << "Enter a Target: ";
//	cin >> target;
//
//	
//	cout << "The char " << target << " was found " << char_counter(entered_items, SIZE, target) << " times." << endl;
//
//	system("pause");
//	return 0;
//}