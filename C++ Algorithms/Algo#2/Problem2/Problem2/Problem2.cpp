

#include <iostream>
using namespace std;

// This is my code : 
int RedNumberPositive(string message)
{
	int Nub;
	do
	{
		cout << message;
		cin >> Nub;
	} while (Nub < 0);

	return Nub;
}
void Check_PrimeNub_1_To_N(int Nub){

	for (int i = 1; i < Nub; i++)
	{
		if (i < 3)
			cout << i << endl;
		for (int j = 2; j <= i; j++)
		{
			if (i % j == 0)
				break;
			if (j == i - 1)
				cout << i << endl;
		}
	}
}

// This is a Professional :

enum enPrimNotPrime
{Prime = 1,NotPrime = 2};

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}
enPrimNotPrime CheckPrime(int Number)
{
	int M = round(Number / 2);
	for (int Counter = 2; Counter <= M; Counter++)
	{
		if (Number % Counter == 0)
			return enPrimNotPrime::NotPrime;
	}
	return enPrimNotPrime::Prime;
}
void PrintPrimeNumbersFrom1ToN(int Number)
{
	cout << "\n";
	cout << "Prime Numbers from " << 1 << " To " << Number;
	cout << " are : " << endl;
	for (int i = 1; i <= Number; i++)
	{
		if (CheckPrime(i) == enPrimNotPrime::Prime)
		{
			cout << i << endl;
		}
	}
}

int main()
{
	// code 1 : 
	Check_PrimeNub_1_To_N(RedNumberPositive("Enter Number Positive : "));
	// code 2 : 
	PrintPrimeNumbersFrom1ToN(ReadPositiveNumber("Please enter a positive number ? "));
	
return 0;

}

