#include <iostream>
using namespace std;

void changeS(int a){
    a=20;
}
void PassByReference(int* a){
    *a=20;
}
void passAsAlias(int &b){
    b=19;
}
int main(){
    int a=10;
    cout<<"Address of var ; "<<&a<<endl;
    // to create a pointer
    int *ptr=&a; // * indicates that it is a pointer

    // for a float or char we need same type of pointer
    float x=23.33;
    float *pt=&x;
    cout<<pt<<endl; // to print address
    cout<<*pt<<endl; // to print the actual value
    int **ptr2 = &ptr;
    cout<<ptr2<<endl;
    cout<<**ptr2<<endl;
    cout<<*ptr2<<endl;

    // dereference operator = * , it returns value store at a adres
    cout<<*(&a)<<endl;
    cout<<*(ptr2)<<endl;

    // pass by value
    int a1=10;
    changeS(a1);
    cout<<"Pass by value : "<<a1<<endl; // value will remain same

    //Pass by reference using pointer
    PassByReference(&a1);
    cout<<"Pass by reference : "<<a1<<endl;

    // Pass by reference using alias
    passAsAlias(a1);
    cout<<"Pass by reference using alias : "<<a1<<endl;

    int arr[3]={1,2,3};
    cout<<"Address of array pointer's first element : "<<arr<<endl;
    // arithmentic
    int x1=10;
    int *x2 = &x1;
    cout<<x2<<" <- Address before update\n";
    x2++; // x2=x2+2 will add two memory spaces of int and same can be used by arrays
    cout<<x2<<" <- after updation spaces\n";
    // in arrays
    cout<<"First value of arr : "<<*arr<<endl;
    cout<<"Second value of arr : "<<*(arr+1)<<endl;
    

}