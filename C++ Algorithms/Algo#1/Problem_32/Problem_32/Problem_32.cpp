
#include <iostream>
using namespace std;
struct strNubs{
    int Number, M;
};

strNubs RedNumbers() {
    strNubs Nub;
    cout << "Donner un Nomber : ";
    cin >> Nub.Number;
    cout << "Donner le Nomber de multipliquation : ";
    cin >> Nub.M;
    return Nub;
}
void Power(strNubs Nub) {
    int multi = 1;
    for (int i = 1; i <= Nub.M; i++){
        multi = multi * Nub.Number;
    }
    cout << "power of " << Nub.Number << "^" << Nub.M << " is : " << multi << endl;
}



int main()
{
    Power(RedNumbers());
}

