#include <iostream>
#include <vector>
using namespace std;

int RotSortArr(vector<int> &vec, int tar){
    int st=0, end=vec.size()-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(vec[mid]==tar){
            return mid;
        }
        if(vec[st]<vec[mid]){// to go left side
            if(vec[st]<=tar && tar<=vec[mid]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        else{// to go right side
            if(vec[mid]<=tar && tar<=vec[end]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int> arr={4,5,6,7,8,0,1,2,3};
    int t=2;
    cout<<RotSortArr(arr,t)<<" <- is index on which element target is present";
}