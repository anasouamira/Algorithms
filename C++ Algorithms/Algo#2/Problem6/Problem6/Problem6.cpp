
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


void ChekSumRemainder(int Number) {
	int Remainder;
	int SumRemainder = 0;
	do
	{
		Remainder = Number % 10;
		SumRemainder += Remainder;
		Number = Number / 10;

	} while (Number > 0);
	cout << SumRemainder << endl;

}

int main()
{
	ChekSumRemainder(RedNumberPositive("Enter Number to Print it in a reversed order : "));

	return 0;

}