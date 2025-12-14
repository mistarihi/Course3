#include<iostream>
using namespace std;
struct StMoney {
	unsigned long long FiftyDinars;
	unsigned short Shilling, TenPiastres, QuarterDinar, HalfDinar, OneDinar, FiveDinar, TenDinar, TwentyDinar;
};
unsigned long long CinShillingWeHave() {
	unsigned long long ShillingWeHave;
	cout << "Please enter how many shilling with you : ";
	cin >> ShillingWeHave;
	return ShillingWeHave;
}
void CalculatingMoney(unsigned long long ShillingWeHave,StMoney &Money) {
		Money.FiftyDinars = ShillingWeHave / 1000;
		ShillingWeHave %= 1000;
		Money.TwentyDinar = ShillingWeHave / 400;
		ShillingWeHave %= 400;
		Money.TenDinar = ShillingWeHave / 200;
		ShillingWeHave %= 200;
		Money.FiveDinar = ShillingWeHave / 100;
		ShillingWeHave %= 100;
		Money.OneDinar = ShillingWeHave / 20;
		ShillingWeHave %= 20;
		Money.HalfDinar = ShillingWeHave / 10;
		ShillingWeHave %= 10;
		Money.QuarterDinar = ShillingWeHave / 5;
		ShillingWeHave %= 5;
		Money.TenPiastres = ShillingWeHave / 2;
		ShillingWeHave %= 2;
		Money.Shilling = ShillingWeHave;
}
void PrintMoney(const StMoney &Money) {
		cout << "\a***********************"<<endl;
		cout << "The number of fifty dinars ----> " << Money.FiftyDinars << endl;
		cout << "The number of twenty dinars ---> " << Money.TwentyDinar << endl;
		cout << "The number of ten dinars ------> " << Money.TenDinar << endl;
		cout << "The number of five dinars -----> " << Money.FiveDinar << endl;
		cout << "The number of one dinars ------> " << Money.OneDinar << endl;
		cout << "The number of half dinars -----> " << Money.HalfDinar << endl;
		cout << "The number of quarter dinars --> " << Money.QuarterDinar << endl;
		cout << "The number of ten piastres ----> " << Money.TenPiastres << endl;
		cout << "The number of Shilling --------> " << Money.Shilling << endl;
		cout << "***********************" << endl;
}

int main() {
		StMoney Money;
	unsigned long long ShillingWeHave = CinShillingWeHave();
	CalculatingMoney(ShillingWeHave,Money);
	PrintMoney(Money);
	
}
