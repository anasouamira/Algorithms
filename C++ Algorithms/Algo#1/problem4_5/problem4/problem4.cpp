#include <iostream>
#include <string>
using namespace std;
struct strInfo{
	 
	int Age;
	bool hasDriver_Licence,hasRecommendation;

};
strInfo RedInfo(){
	strInfo persone;
	cout << "*****************************************" << endl;
	cout << "Enter your Age : ";
	cin >> persone.Age;
	cout << "Do you have Driver Licence, Enter number (  yes = 1 / no = 0 ) : ";
	cin >> persone.hasDriver_Licence;
	cout << "Do you have Recommendation, Enter number (  yes = 1 / no = 0 ) : ";
	cin >> persone.hasRecommendation;

	return persone;
}
bool isAccepted(strInfo persone){
	return (persone.Age >= 21 || persone.hasDriver_Licence) && !(persone.hasRecommendation);
}
void PrintInfo(strInfo persone) {

	while (isAccepted(persone)){
		cout << "your are rejected" << endl;
		cout << "*****************************************" << endl;
		cout << "enter again" << endl;
		RedInfo();
	}
	cout << "*****************************************" << endl;
	cout << "you are hired" << endl;
}

int main()
{
	PrintInfo(RedInfo());
}
	
	


