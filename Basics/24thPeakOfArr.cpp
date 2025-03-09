#include <iostream>
#include <vector>
using namespace std;

int PeakArr(vector<int> & vec){
    int st=0, end=vec.size()-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(vec[mid]<vec[mid-1]){
            end=mid-1;
        }
        else if(vec[mid]<vec[mid+1]){
            st=mid+1;
        }
        else if(vec[mid]>vec[mid+1] && vec[mid]>vec[mid-1]){
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int> vec={-4,-2,0,9,10,14,16,7,5,2};
    cout<<"index where peak element is present : "<<PeakArr(vec);
}