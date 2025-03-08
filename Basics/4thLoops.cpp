#include <iostream>
using namespace std;

int main(){

    int n =-2;
    while (n<=5){
        cout << n << endl;
        n++;
    }

    int y = 10;
    int count = 0;
    while (count+1<=y){
        cout << count ;
        count++;
    }

    cout<< "For loop\n";
    
    for(int n = 0; n<10; n++){
        cout << "Updated value of n: "<<n<<"\n";
    }

    // sum of numbers till a certain number;

    int sum=0;
    int g;
    cout <<"Enter the number till sum: ";
    cin >> g;
    for(int i=0; i<=g; i++){

        sum+=i;
    }
    cout << "Summation of number : "<<sum;


    // do while loop
    int i = 0;
    do{
        cout<< i << " <- Value of i updated in do while loop\n";
        i++;
    }
    while(i<11);

    // nested loop

    cout<<"Nested loop \n";

    for(int j = 0; j<10; j++){
        for(int k = 0; k<10; k++){
            cout<< j+k << endl;
        }
    }

    return 0;
}