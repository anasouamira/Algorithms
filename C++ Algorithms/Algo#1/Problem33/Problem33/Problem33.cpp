

#include <iostream>
using namespace std;
int RedNub(){
	int Nub;
	while (Nub > 100 || Nub < 0) {
		cout << "Donner la note : ";
		cin >> Nub;
	}
	return Nub;
}
void CheckAvrage(int Nub) {

	while (Nub > 100 || Nub < 0) { // 90
	
		if (Nub >= 90) { cout << "A" << endl; }
		else if (Nub >= 80) { cout << "B" << endl; }
		else if (Nub >= 70) { cout << "C" << endl; }
		else if (Nub >= 60) { cout << "D" << endl; }
		else if (Nub >= 50) { cout << "E" << endl; }
		else{ cout << "F" << endl;}
	}
	

}

int main()
{
	CheckAvrage(RedNub());

}

