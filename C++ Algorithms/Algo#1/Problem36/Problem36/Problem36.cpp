
#include <iostream>
using namespace std;
struct strNub_Ope{
	int Number1, Number2;
	char Ope;
};
strNub_Ope RedNub_Ope(strNub_Ope& Nub_Ope) {

	cout << "Enter Number1 : " << endl;
	cin >> Nub_Ope.Number1;
	cout << "Enter Number2 : " << endl;
	cin >> Nub_Ope.Number2;
	do {
		cout << "Enter Operation type : " << endl;
		cin >> Nub_Ope.Ope;
	} while ( ((Nub_Ope.Ope == '+') || (Nub_Ope.Ope == '-')) || ((Nub_Ope.Ope == '*') || (Nub_Ope.Ope == '/')) );

	return Nub_Ope;
}
int CheckOperationType(strNub_Ope Nub_Ope) {
	if (Nub_Ope.Ope == '+') {
		return Nub_Ope.Number1 + Nub_Ope.Number2;
	}
	else if (Nub_Ope.Ope == '-') {
		return Nub_Ope.Number1 - Nub_Ope.Number2;

	}
	else if (Nub_Ope.Ope == '*') {
		return Nub_Ope.Number1 * Nub_Ope.Number2;

	}
	else if (Nub_Ope.Ope == '/') {
		return Nub_Ope.Number1 / Nub_Ope.Number2;

	}
}

int main()
{
	strNub_Ope Nub_Ope;
	cout << "Result : " << CheckOperationType(RedNub_Ope(Nub_Ope));

}

