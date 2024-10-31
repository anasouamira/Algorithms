

#include <iostream>
using namespace std;
void Print_1_to_10() {
    int i = 1;
    while (i != 20) {
        if (i <= 10) {
            cout << "\t" << i;
        }
        else if (i == 11) { cout << "\n__"; }
        else { cout << "__________"; }
        i++;
    } 
    cout << endl;
}
void Multi_Table_1_To_10() {

    int Multi = 1;
    for (int i = 1; i <= 10; i++) {
        
        if (i < 10){ cout << " " << i << "    |  ";}
        else{ cout << " " << i << "   |  "; }

        for (int j = 1; j <= 10; j++) {
            Multi = i * j;
            cout << Multi << "\t";
        }
        cout << endl;
    }
}

int main()
{
    Print_1_to_10();
    Multi_Table_1_To_10();

}
