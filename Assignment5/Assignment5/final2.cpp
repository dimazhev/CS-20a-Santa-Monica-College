//#include<iostream>
//#include<string>
//using namespace std;
//
//class Ship 
//{
//private:
//	string name;
//	int yearBuilt;
//
//public:
//	string getName() {
//		return name;
//	}
//	void setName(string inName) {
//		name = inName;
//	}
//	int getYear() {
//		return yearBuilt;
//	}
//	void setYear(int inYear) {
//		yearBuilt = inYear;
//	}
//	virtual double computeRevenue() = 0;
//
//};
//
//class CruiseShip : public Ship {
//private:
//	int numberOfPass;
//	double pricePerPass;
//
//public:
//	CruiseShip(int numberOfPass, double pricePerPass) {
//		this->numberOfPass = numberOfPass;
//		this->pricePerPass = pricePerPass;
//	}
//	virtual double computeRevenue() {
//		return numberOfPass * pricePerPass;
//	}
//
//};
//
//class CargoShip : public Ship {
//private:
//	int numOfCont;
//	double pricePerCont;
//
//public: 
//	CargoShip(int numOfCont, double pricePerCont) {
//		this->numOfCont = numOfCont;
//		this->pricePerCont = pricePerCont;
//	}
//	virtual double computeRevenue() {
//		return numOfCont * pricePerCont;
//	}
//};
//
//int main()
//{
//	
//	return 0;
//}