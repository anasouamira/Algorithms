
#include <iostream>
#include <string>
using namespace std;

float RedNubers(string message) {
	    int Nub = 0;
		cout << message;
		cin >> Nub;
	    return Nub;
}

int CalculetSum(){
	int sum = 0, Nub = 0, Conter = 1;
	 
	do{
		sum += Nub;
		Nub = RedNubers("Enter Number " + to_string(Conter) + " : (Enter -99 to stop) : ");
		Conter++;
	} while (Nub != -99);

	return sum;
}

int main()
{
	cout << "Resul = " << CalculetSum();


}

