#include <iostream>
using namespace std;

int sumOfDigit(int n){
    int sum = 0;
    while(n>0){
        sum=sum+n%10;
        n=n/10; // to get answer 145/10 will be 14, and in modulo it will give out last digit
        // so as it will add all number and at last when 1 is left and in modulo it say 1 and on divide
        // it will output zero and hence loop will stop.
    }
    return sum;
}

int fact (int num){
    int mul = 1;
    for(int i=1; i<=num; i++){
        mul*=i;
    }
    return mul;
}

int nCr(int n, int r){
    return fact(n)/(fact(r)*fact(n-r)); 
}

bool checkPrime(int n){
    bool flag = true;
    int i = 2;
    while(i*i<=n){
        if(n%i==0){
            flag=false;
        }
        i++;
    }
    return flag;
}

void allPrime(int num){
    for(int i=2; i<=num;i++){
        if(checkPrime(i)==true){
            cout<<"Number print until :"<<num<<" are:"<<i<<endl;
        }
    }
}

void fibo(int n){
    int a = 0;
    int b = 1;
    int s = 0;
    cout<<a<<",";
    cout<<b<<",";
    for(int i= 0; i<=n;i++){
        s=a+b;
        a=b;
        b=s;
        cout<<s<<",";
    }

}

int main(){
    cout << sumOfDigit(1432) << "<- sum of digits\n";

    // calculate ncr = n!/r!*(n-r)! 
    // so write two function one to return fact and one to return ncr
    cout << nCr(5,2) <<"<- NcR\n";

    allPrime(21);

    fibo(12);

    return 0;
}