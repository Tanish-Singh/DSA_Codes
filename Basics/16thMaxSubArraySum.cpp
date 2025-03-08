/* Basicallt find sum in an array of that subaray holding the maximum sum init
like set of 1 element is subarray as well ass continous 3 elements is also a subarray
if an array of n has n*(n+1)/2 number of subarrays*/
#include <iostream>
#include <vector>
using namespace std;

int main(){
    // to print all sub arrarys
    int arr[5]={1,2,3,4,5};
    for(int st=0; st<5;st++){
        for(int end=st; end<5;end++){
            for(int i=st; i<=end;i++){ // to print from the outermost pointer first for 1 then for 2 and so on
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }

    // so same approach can be used to print sum of subarray
    int arr1[7]={3,-4,5,4,-1,7,-8};
    int maxsum=INT_MIN;
    int sum=0;
    for(int st=0; st<7;st++){
        int cursum=0; // becasue at every subarray it should be zero
        for(int end=st; end<7;end++){
            cursum+=arr1[end];
            maxsum=max(maxsum,cursum);
        }
    }
    cout<<"Max sum in the array is : "<<maxsum<<endl;

    // using kadanes algorithm
    // basically when ever the sum of a sub array becomes less than zero reset curr sum to zero as
    // even if next number is positive the sum of that array will reduce.
    
    int ms=INT_MIN;
    vector<int> vec={3,-4,5,4,-1,7,-8};
    int cs=0;
    for(int val:vec){
        cs=cs+val;
        ms=max(ms,cs);
        if(cs<0){
            cs=0;
        }
    }
    cout<<"Max sum using kadanes : "<<ms;
}