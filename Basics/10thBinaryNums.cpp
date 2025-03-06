#include <iostream>
using namespace std;

int decBin(int n){
    int ans=0;
    int pow = 1;
    int rem;
    while(n>0){
        rem = n%2;
        n = n/2;
        ans+=rem*pow;
        pow=pow*10;
    }
    return ans;
}

int binDec(int binNum){
    int ans =0;
    int pow=1;
    int rem;
    while(binNum>0){
        rem = binNum%10;
        binNum/= 10;
        ans+=rem*pow;
        pow*=2;
    }
    return ans;
}

int main(){
    cout<<decBin(50);
    cout<<"\nNumber binary to decimal : "<< binDec(110010);

}
