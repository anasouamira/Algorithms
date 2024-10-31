

#include <iostream>
#include <string>
using namespace std;
enum enmPrimeNotPrime{Prime = 1, NotPrime = 2};
float RedNumbers(string messege) {
	int Nub = 0;
	do {
		cout << messege;
		cin >> Nub;
	} while (Nub < 0);

	return Nub;
}
enmPrimeNotPrime ChekPrime(int Nub){

	int M = round( Nub / 2);
	for (int i = 2; i <= M; i++){
		if (Nub % i == 0) {
			return enmPrimeNotPrime::Prime;
		}
	}
	return enmPrimeNotPrime::NotPrime;
}

void PrintNumberType(int Nub) {
	
	switch (ChekPrime(Nub))
	{
	case enmPrimeNotPrime::Prime: cout << "This Number is Prime" << endl;
		break;
	case enmPrimeNotPrime::NotPrime: cout << "This Number is Not Prime" << endl;
		break;
	}

}
int main()
{
	PrintNumberType(RedNumbers("Pleas Enter Number Positive : "));
	return 0;
}

