
#include <iostream>
using namespace std;

int RedNumberPositive(string message) {
	int Number;
	do
	{
		cout << message;
		cin >> Number;

	} while (Number < 0);
	return Number;
}

void ChekRemainder(int Number){
	int Remainder;
	do
	{
		Remainder = Number % 10;
		Number = Number / 10;
		cout << Remainder ;

	} while (Number > 0);

}

int main()
{
	ChekRemainder(RedNumberPositive("Enter Number to Print it in a reversed order : "));

	return 0;

}
