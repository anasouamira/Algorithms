

#include <iostream>
using namespace std;
int RedTotalSales() {

	int Nub;

	do{
	cout << "Enter Total Sales : ";
	cin >> Nub;
	} while (Nub < 0);

	return Nub;
}
int Percentage(int Nub) {

	if (Nub == 1000000) {
		return 0.01;
	}
	else if (Nub >= 500000) {
		return 0.02;
	}
	else if (Nub >= 100000) {
		return 0.03;
	}
	else if (Nub >= 50000) {
		return 0.05;
	}
	else {
		return 0;
	}
}
int ChekPr(int Nub) {

	return Nub * Percentage(Nub);
}

int main()
{
	
	cout << "The commission is : " <<  ChekPr(RedTotalSales());

}

