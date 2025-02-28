#include <iostream>
using namespace std;

int main(){
    if (6<4) // can change the condition to see the output
    {
        cout << "6 is greater than 4\n";    
    }
    else if(6==4){
        cout << "6 is equal to 4\n";

    }
    else{
        cout << "6 is not greater than 4\n";
    }

    // to check if a character is loweer case or upper case
    // logic 11

    cout << "Enter a character: ";
    char ch;
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "Character is lower case\n";
    }
    else if (ch >= 'A' && ch <= 'Z') // logic 2 (ch >= 65 && 90<=ch)
    {
        cout << "Character is upper case\n";
    }
    else{
        cout << "Character is not an alphabet\n";
    }

    // Ternary operators
    int n = 45;
    cout << (n>=0 ? "Positive":"Negative") << endl;
    

    return 0;
}