
#include <iostream>
using namespace std;
int RedNumberPositive(string message) {
	int Nub = 0;
	do
	{
		cout << message;
		cin >> Nub;

	} while (Nub < 0);

	return Nub;
}
float NumberOfHoursOfDay(float Nub) {
	return Nub / 24;
}
float NumberOfHoursOfWeek(float Nub) {
	 
	return Nub / 168;
}
int main()
{
	int Hours = RedNumberPositive("Enter Number of Hours : ");
	cout << NumberOfHoursOfDay(Hours) << " Day" << endl;
	cout << NumberOfHoursOfWeek(Hours) << " Weeks" << endl;

	return 0;
}

