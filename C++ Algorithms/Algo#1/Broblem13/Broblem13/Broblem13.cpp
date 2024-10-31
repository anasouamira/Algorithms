
#include <iostream>
using namespace std;
void RedNumbers(float& Nub1, float& Nub2, float& Nub3) {
	
	cout << "Donner Nub1 = ";
	cin >> Nub1;
	cout << "Donner Nub2 = ";
	cin >> Nub2;
	cout << "Donner Nub3 = ";
	cin >> Nub3;

}
float ChekMaxOfNumbers(float Nub1, float Nub2, float Nub3) {
	  
	if (Nub1 > Nub2) {
		if (Nub1 > Nub3) {
			return Nub1;
		}else { return Nub3;}
	}
	if (Nub2 > Nub3) {
			return Nub2;
	}
	else { return Nub3; }
	
}
void PrintNumbers(float max){
	cout << "Max of Numbers is : " << max;
}

int main()
{
	float Nub1, Nub2, Nub3;
	RedNumbers(Nub1, Nub2, Nub3);
	PrintNumbers(ChekMaxOfNumbers(Nub1, Nub2, Nub3));
}
