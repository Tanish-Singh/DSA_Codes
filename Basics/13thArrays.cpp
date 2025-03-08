#include <iostream>
using namespace std;

void changeArr(int arr[], int n){
    for(int i=0; i<n;i++){
        arr[i]=arr[i]*2;
    }
}

int main(){
    // int arr[5]; // decalred an empty array
    // int arr1[]={1,2,3};// declared an non empty array with dynamic size but this can't be empty
    // // 
    // cout<<"size of arr1 "<<sizeof(arr1)<<endl; 

    // // to read elements of array 
    // for(int i=0; i<sizeof(arr1)/sizeof(int);i++){
    //     cout<<arr1[i];
    // }

    // cout<<"Custom input in a array\n";
    // int n;
    // int a[5];
    // for(int i=0; i<sizeof(a)/sizeof(int);i++){
    //     cout<<"Enter the element no "<<i<<" :";
    //     cin>>n;
    //     a[i]=n;
    // }

    // Largest and smallest number
    int lar = INT_MIN;
    int sml=INT_MAX;
    int arr2[10]={10,4,3,65,24,7,34,88,23,-4};
    for(int i=0; i<sizeof(arr2)/sizeof(int);i++){
        if(lar<arr2[i]){
            lar=arr2[i];
        }
        else if(sml>arr2[i]){
            sml=arr2[i]; // sml = min(nums[i], sml); this also works
        }
    }
    cout<<"Maximum element is : "<<lar<<", Minimum element is : "<<sml;
    
    // pass by reference - means we pass the address of the main datatype, this will lead to changes within
    // original stored values for example in arrays the reference is passed not values like vars
    
    int arrr[4]={3,41,3,5};
    //cout<<changeArr(arrr,4); // this doesnt work cause we cant print array directly in cpp
    changeArr(arrr, 4); // Call function to modify array

    // Print the modified array
    cout << "Modified array: ";
    for (int i = 0; i < 4; i++) {
        cout << arrr[i] << " ";
    }
    cout << endl;

    // reverse an error
    cout<<"Reversing Array\n";
    int arrrr[7]={4,1,2,5,8,3,9};
    int st=0;
    int ls = sizeof(arrrr)/sizeof(int)-1;
    int mid=0;
    while(st<ls){
        mid=arrrr[ls];
        arrrr[ls]=arrrr[st];
        arrrr[st]=mid;
        st++;
        ls--;
    }
    for (int h = 0; h < 7; h++) {
        cout << arrrr[h] << " ";
    }
    cout << endl;

}
