

#include <iostream>
using namespace std;
int RedNumbers(){

    int Nub;
    cout << "Donner un nomber : " << endl;
    cin >> Nub;
    return Nub;
}
int PowerOf_2_3_4(int Nub,int Power_Nub) {

    int Powr = 1;
    for (int i = 1; i <= Power_Nub; i++){Powr = Powr * Nub;}
    return Powr;
}
void PrintPowerOf_2_3_4(int Nub){

    for (int i = 2; i <= 4; i++){cout << PowerOf_2_3_4(Nub, i) << endl;}
}

int main()
{
   
    
    PrintPowerOf_2_3_4(RedNumbers());

}

