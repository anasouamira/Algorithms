

#include <iostream>
using namespace std;
int RedNumberPositive(string message){
	int Nub;
	do {
		cout << message;
		cin >> Nub;
	} while (Nub <0);

	return Nub;
}
void Check_PrimeNub_1_To_N(int Nub){
	
	  for (int i = 1; i < Nub; i++) {
		  if (i < 3) { cout << i << endl;}
		    for (int j = 2; j <= i; j++){
			  if (i % j == 0) {break;}
			  if (j == i-1) { cout << i << endl;}
		    } 
	  }
}
int main()
{
	Check_PrimeNub_1_To_N(RedNumberPositive("Enter Number Positive : "));

}

