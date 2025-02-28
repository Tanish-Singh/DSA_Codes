#include <iostream>
using namespace std;
int main(){
    int a = 10;
    char b = 'S';
    float c = 10.5f;
    double d = 13.59472937394; // used to store more precision based values like scintific values
    bool e = true;
    cout << "Value of vars are: " << a << b << c << d << e << "\n";

    cout << "Size of int: " << sizeof(a) << " bytes" << " Hence sizeof funtion is used\n";

    int h =23, rf = 39;
    cout<<h+rf<<"\n";

    //type casting or converion
    // conversion small dtype to big
    char x = 'A';
    int y = x;
    cout << "Value of y typeconversion: " << y << endl;

    //casting is forced for big to small conversion 
    double p = 10.232432342;
    int q = (int)p;
    cout << "Value of q typecasted: " << q << endl;

    // input

    int r;
    cin >> r;
    cout << "Value of r: " << r << endl;
    
    // operators 
    // arithmetic - +, -, *, /, %
    // relational - ==, !=, >, <, >=, <=
    // logical - &&, ||, !
    // increment and decrement 

    return 0;
}