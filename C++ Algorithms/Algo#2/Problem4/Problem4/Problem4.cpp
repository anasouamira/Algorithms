
#include <iostream>
using namespace std;

enum enmPrefectNotPerfect { Prefect = 1, NotPrefect = 2};

int RedPsitiveNumber(string message) {

	int Number;
	do
	{
		cout << message;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

enmPrefectNotPerfect CheckPrefectNumber(int Number){

	int M = round(Number / 2);
	int SumNubPrime = 0;
	for (int Divisor = 1; Divisor <= M; Divisor++)
	{
		if(Number % Divisor == 0)
			SumNubPrime += Divisor;
	}
	if (SumNubPrime == Number) return enmPrefectNotPerfect::Prefect;
	return enmPrefectNotPerfect::NotPrefect;
	
}

void PrintPrefectNumber(int Number) {

	for (int counter = 1;counter <= Number;counter++)
	{
		if (CheckPrefectNumber(counter) == enmPrefectNotPerfect::Prefect)
			cout << counter << endl;
	}

}

int main()
{
	PrintPrefectNumber(RedPsitiveNumber("Enter Number positive to check how meny numbers perfict from 1 to N : "));
}