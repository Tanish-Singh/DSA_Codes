#include <iostream>
#include <vector>
using namespace std;

int BinaryS(vector<int> vec, int target){
    int st=0;
    int end=vec.size()-1;
    while(st<=end){
        int mid=(st+end)/2;
        if(vec[mid]>target){ // shift the end point before mid
            end=mid-1;
        }
        else if(vec[mid]<target){// shift the pointer after mid
            st=mid+1;
        }
        else{
            return mid;
            break;
        }
    }
    return -1;
    
}

int BsReccursive(vector<int> vec, int tar, int st, int end){
    int mid = st+(end-st)/2;
    while(st<=end){
        if(vec[mid]<tar){
            return BsReccursive(vec, tar, st+1, end);
        }
        else if(vec[mid]>tar){
            return BsReccursive(vec, tar, st, mid-1);
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int> vec={-1,0,3,4,5,9,12,44};
    int target=9;
    cout<<"Index where 0 is present : "<<BinaryS(vec,target)<<endl;
    cout<<"Index where 0 is present using recursive approach : "<<BsReccursive(vec,3,0,vec.size()-1)<<endl;
        
}