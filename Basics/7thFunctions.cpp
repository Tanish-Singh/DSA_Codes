#include <iostream>
using namespace std;


void printHello(){
    cout<<"Hello\n";
}



int sum(int a, int b){
    return (a+b);
}

int minOfTwo(int a, int b){
    return a>b?a:b;
}

int sumTillN(int n){
    int sum=0;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    return sum;
}
int main(){
    printHello();
    cout << "Sum of Numbers :"<<sum(10,2)<<"\n";
    cout << minOfTwo(10,19)<<"\n";

    cout<< "Sum till n with function : " << sumTillN(4) <<endl;

    

    return 0;
}