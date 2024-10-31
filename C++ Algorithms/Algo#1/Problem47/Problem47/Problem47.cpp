
#include <iostream>
#include <string>
using namespace std;
enum enmATM_PIN { ATM_PIN = 1234, Balance = 7500, Card_Is_Loked = 0};

int Red_ATM_PIN(string message){
	int Pin;
	do {
		cout << message;
		cin >> Pin;
	} while (Pin < 0);

	return Pin;
}
enmATM_PIN Check_ATM_PIN(int Pin) {
	int i = 1;

	while(i <= 3 && Pin != enmATM_PIN::ATM_PIN){
		Pin = Red_ATM_PIN("Error ! Enter Atm Pin again : ");
		i++;
		if (i == 3)
		{
			return enmATM_PIN::Card_Is_Loked;
		}
	}
	return enmATM_PIN::Balance;
}
string Check_Balance(int ATM_PIN) {

	ATM_PIN = Check_ATM_PIN(ATM_PIN);

	if (ATM_PIN == 0) {
		return "Card is loked ! ";
	}
	else {
		return "Your balance is : "  + to_string(ATM_PIN);
	}

}

int main()
{
	int ATM_PIN = Red_ATM_PIN("Enter Atm Pin :");
	cout <<  Check_Balance(ATM_PIN) << endl;
}

