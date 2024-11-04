

#include <iostream>
using namespace std;

// This is my code : 
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

// This is Professional code :

void PrintTableHeader() 
{ 
    cout << "\n\n\t\t\t Multipliaction Table From 1 to 10\n\n"; 
    cout << "\t"; 
for (int i = 1; i <= 10; i++) 
    { 
        cout << i << "\t"; 
    } 
    cout << "\n___________________________________________________________________________________\n"; 
} 
string ColumSperator(int i) 
{ 
    if (i < 10) 
        return "   |"; 
    else 
    return "  |"; 
} 
void PrintMultiplicationTable() 
{ 
    PrintTableHeader(); 
for (int i = 1; i <= 10; i++) 
    { 
        cout << " " << i << ColumSperator(i) << "\t"; 
for (int j = 1; j <= 10; j++) 
        { 
            cout << i * j << "\t"; 
        } 
        cout << endl; 
    } 
} 

int main()
{
    // code 1 :
    Print_1_to_10();
    Multi_Table_1_To_10();
    // code 2 :
    PrintMultiplicationTable(); 

}
