#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class LunchBox
{
public:
	LunchBox();
	LunchBox(int size, int width, string color, string food);
	
	int getSize() 
	{
		return size;
	}

	int getWidth()
	{
		return width;
	}

	string getColor()
	{
		return color;
	}

	string getFood() {
		return food;
	}
	void setFood(string food) {
		this->food = food;
	}



private: 
	int size; 
	int width;
	string color;
	string food;

};

int main()
{
	LunchBox box(10, 10, "white", "chocolate");
	LunchBox* box2 = new LunchBox();
	//testing pointer 
	box2->setFood("Sushi");
	cout << "Food : " << box2->getFood();

	return 0;
}

LunchBox::LunchBox():size(10), width(10), color("white"), food("") {}

LunchBox::LunchBox(int inSize, int inWidth, string inColor, string inFood) :
	size(inSize), width(inWidth), color(inColor), food(inFood) {}

