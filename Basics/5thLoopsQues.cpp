#include <iostream>
using namespace std;

int main(){

    // sum of all odd numbers

    int j = 1;
    int sum = 0;
    int n = 10;
    while(j<=n){
        if(j%2!=0){
            sum+=j;
        }
        j++;
    }
    cout << "Sum of odd numbers : "<< sum << endl;

    // to check if a number is prime or not
    // 0, 1 will give true so check for 2 to n-1

    int check = true; // by default is true
    int i = 2;
    int num = 101;
    while(i<num){
        if(num%i==0){
            check=false; // if its not prime then it will enter the condition and change the output
        }
        i++;
    }
    cout << (check==true?"Its a prime\n":"Not a prime\n"); // if stays true that means it didnt entered the condition 
    // hence remains true
    // better approach is to check its factors
    /* in factorization like of 12 - (12*1),(2,6),(3,4),(4*3),(6*2),(12,1) here factors repeat after certain time
    so why not to check only till 2,3 cause after that they are repeating so to check for this we can range to 2 to 
    root(12)=3.__ hence we will run the loop till this only, so in solution we will check for i*i cause it will 
    lesser then n right firts 1*1, then 2*2 then 3*3 afterwards it will exceed for 12 so hence it will stop that*/
    int check1 = true; // by default is true
    int i1 = 2;
    int num1 = 71;
    while(i1*i1<num1){ // hence changed
        if(num1%i1==0){
            check1=false; 
        }
        i1++;
    }
    cout << (check1==true?"Its a prime in better aproach\n":"Not a prime in better aproach\n");


    // sum of numbers divisible by 3

    int n2 = 10;
    int mul = 0;
    int i2 = 1;
    while(i2<=n2){
        if(i2%3==0){
            mul+=i2;
        }
        i2++;
    }
    cout<<"Multiple :"<<mul;

    // factorial

    int n3 = 5;
    int fact = 1;
    int i3=1;
    while(i3<=n3){
        fact*=i3;
        i3++;
    }
    cout<<"\n" << fact;

    return 0;
    }