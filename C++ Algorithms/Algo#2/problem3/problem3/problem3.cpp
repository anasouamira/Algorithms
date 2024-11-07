
#include <iostream>
using namespace std; 

enum enmDivisorNotDivisor { Divisor = 1, NotDivisor = 2};
int RedPsitiveNumber(string message){

	int Number;
	do
	{
		cout << message;
		cin >> Number;
	} while (Number < 0);

	return Number;
}
enmDivisorNotDivisor ChekDivisors(int Number ,int Divisor){

	if (Number % Divisor == 0) return enmDivisorNotDivisor::Divisor;

	return enmDivisorNotDivisor::NotDivisor;

}
void PrintPrefectNumber(int Number) {

	int M = round(Number / 2);
	int SumNubPrime = 0;
	for (int Divisor = 1; Divisor <= M; Divisor++)
	{
		if (ChekDivisors(Number, Divisor) == enmDivisorNotDivisor::Divisor)
			SumNubPrime += Divisor;
	}
	if (SumNubPrime == Number) cout << Number << " is Prefect."<< endl;
	else cout << Number << " is not prfect." << endl;

}

int main()
{
	PrintPrefectNumber(RedPsitiveNumber("Enter Number positive to check it if prefect or not : "));
}

