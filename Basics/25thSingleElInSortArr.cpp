#include <iostream>
#include <vector>
using namespace std;

int SingleElInSortArr(vector<int> &vec){
    int st=0, end=vec.size()-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(mid==0&&vec[0]!=vec[1]){
            return mid;
        }
        if(mid==0 && vec[vec.size()-1]!=vec[vec.size()-2]){
            return mid;
        }
        if(vec[mid]!=vec[mid-1] && vec[mid]!=vec[mid+1]){
            return mid;
        }
        if(mid%2==0){
            if(vec[mid]==vec[mid-1]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        else{
            if(vec[mid]==vec[mid-1]){
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
    vector<int> vec={11,11,12,12,13,14,14};
    cout<<"index where single element is present : "<<SingleElInSortArr(vec);
}