
#include <iostream>
using namespace std;
struct strMoney {
	int Penny, Nickel, Dime, Quater, Dolar;
};
strMoney RedMoney(strMoney& Money) {

	cout << " Enter Penney : ";
	cin >> Money.Penny;

	cout << " Enter Penney : ";
	cin >> Money.Nickel;

	cout << " Enter Penney : ";
	cin >> Money.Dime;

	cout << " Enter Penney : ";
	cin >> Money.Quater;

	cout << " Enter Penney : ";
	cin >> Money.Dolar;

	return Money;

}
int TotalPenny(strMoney Money){ 

	return (Money.Penny) + (Money.Nickel * 5) + (Money.Dime * 10) + (Money.Quater * 25) + (Money.Dolar * 100);

}
int TotaDolars(strMoney Money) {
	return  TotalPenny(Money) / 100;
}


int main()
{
	strMoney Money;
	cout << "Total Of Peney : " << TotalPenny(RedMoney(Money)) << endl;
	cout << "Total Of Dolar : " << TotaDolars(TotalPenny()) << endl;

}

