#include<iostream>
#include<string>
using namespace std;

void drawPlusSigns(int number) {
	int halfNumberOfVerticalX = number / 2;
	int numberOfHorizantolX = number;
	if (number % 2 == 0) {
		numberOfHorizantolX = numberOfHorizantolX + 1;
	}
	string spacerAndX = "";
	for (int i = 0; i < halfNumberOfVerticalX; i++) {
		spacerAndX += " ";
	}
	spacerAndX += "X";
	for (int i = 0; i < halfNumberOfVerticalX; i++) {
		cout << spacerAndX << endl;
	}
	for (int i = 0; i < numberOfHorizantolX; i++) {
		cout << "X";
	} 
	cout << endl;
	for (int i = 0; i < halfNumberOfVerticalX; i++) {
		cout << spacerAndX << endl;
	}
	cout << endl;

}
int main()
{
	int input;
	cout << "Enter Input: ";
	cin >> input;
	if (input > 0) {
		drawPlusSigns(input);
	}


	return 0;
}