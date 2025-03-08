#include <iostream>
using namespace std;
int main(){

    // cout<<"Bitwise AND (&) "<<(10&5)<<endl; // when both bit are 1 then only one
    // cout<<"Bitwise OR (|) "<<(10|5)<<endl;// even when single bit is one 
    // cout<<"Bitwise XOR (^) "<<(10^6)<<endl;// when both bit are same gives zero else 1

    // cout<<"Bitwise Left shift "<<(12<<2)<<endl; // n<<i = n*2^i
    // cout<<"Bitwise Right shift "<<(12>>2)<<endl; // n>>i = n/2^i

    // to find if a number is in power or two ro not
    // brute force
    int num = 34;
    int n = 1;
    while(n<=num){
        n=n*2;
        if(n==num){
            cout<<"Yes the number is power of 2";
        }
    }

    // using bitwise left shift operation

    int pow= 1;
    int num1=32;
    while(pow<=num1){
        if(pow==num1){
            cout<<"It is power of 2 by left shift";
        }
        pow<<=1;
    }

    int pow1=1;
    int num2=16;
    while(num2>=pow1){
        if(pow1==num2){
            cout<<"It is the power of two by right shift";
        }
        num2>>=1;

    }



}