//#include <iostream>
//#include <string>
//#include <cmath>
//using namespace std;
//
//class MortgagePayment
//{
//private:
//	double payment;
//	double loan;
//	double rate;
//	int years;
//	
//public:
//	MortgagePayment() :payment(0), loan(0), rate(0), years(0) {}
//	
//	void setLoan(double inLoan) {
//		loan = inLoan;
//	}
//	void setIntRate(double inRate) {
//		rate = inRate;
//	}
//	void setYears(int inYears) {
//		years = inYears;
//	}
//
//	double getMonthlyPayment() {
//		return payment;
//	}
//	
//	void calculate() {
//		double term = pow(1 + rate / 12, 12 * years);
//		payment = (loan * (rate / 12) * term) / (term - 1);
//	}
//
//	double getTotalPayment() {
//		double total = payment * 12 * years ;
//		return total;
//	}
//	
//};
//
//int main()
//{
//	double loan ;
//	double rate ;
//	int years ;
//		
//	do {
//		cout << "Please enter loan amount: ";
//		cin >> loan;
//	} while (loan <= 0);
//
//	do {
//		cout << "Please enter rate: ";
//		cin >> rate;
//	} while (rate <= 0);
//
//	do {
//		cout << "Please enter years: ";
//		cin >> years;
//	} while (years <= 0);
//	
//
//	MortgagePayment myMortgage;
//	myMortgage.setIntRate(rate);
//	myMortgage.setLoan(loan);
//	myMortgage.setYears(years);
//	// Calculate the payment
//	myMortgage.calculate();
//	cout << "Monthly Payment is : " << myMortgage.getMonthlyPayment() << endl;
//	cout << "Total payment is : " << myMortgage.getTotalPayment();
//
//	return 0;
//}
//
