#include <iostream>
using namespace std;

int arrsum(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n;i++){
        sum += arr[i];
    }
    return sum;
}
int arrProd(int arr[], int n){
    int prod=1;
    for (int i=0; i<n;i++){
        prod*=arr[i];
    }
    return prod;
}

int main(){
    int ar[5] = {1,2,3,4,5};
    // cout<<"Summ of arr : "<<arrsum(ar,5);
    // cout<<"\nProd of arr : "<<arrProd(ar,5);


    // to print only unique values in array
    int un[10]={1,4,2,6,4,7,3,6,1,9};
    for(int i=0;i<10;i++){
        bool flag = true;
        for(int j=0; j<10;j++){
            if(i!=j & un[i]==un[j]){
                flag=false;
            }
        }
        if(flag==true){
            cout<<"Unique value : "<<un[i]<<endl;
        }
    }

    // intersection of 

    int arr[5]={5,6,4,7,8};
    int arr1[5]={1,2,4,6,8};
    for(int i=0; i<5; i++){
        for(int j=0; j<5;j++){
            if(arr[i]==arr1[j]){
                cout<<"Intersect Element : "<< arr[i]<<endl;
            }
        }
    }
    return 0;
}