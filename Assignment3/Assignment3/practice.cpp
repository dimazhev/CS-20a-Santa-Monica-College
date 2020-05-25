
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int foo(int a, int b) { //First
	int c = a + b;
	while (c >= 3)
		c -= 3;
	return c;
}
//------------------------------------
char foo(string a, int b) { //Second
	return a[b];
}
//------------------------------------
string foo(int b, string &a) { //Third
	string sub = a.substr(3 * b, 3);
	a.replace(3 * b, 3, "...");
	return sub;
}
//--------------------------------------
void main() {
	int last_sid = 1; //<-Last digit of your SID
	string letters("ggfiorkcboneat !!!ws adtarojot");
	string output("");
	int numbers[] = { 0,8,3,7,4,6,9,1,2,5 };
	for (int i = 0; i < 10; i++) {
		int j = numbers[i];
		numbers[i] = foo(last_sid, i);
		string s = foo(j, letters);
		output += foo(s, numbers[i]);
	}
	cout << output;
}