#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int vec[4]={2,7,11,15};
    int st=0;
    int end=3;
    int target=18;
    while(st<end){
        if(vec[st]+vec[end]>target){
            end--;
        }
        else if(vec[st]+vec[end]<target){
            st++;
        }
        else{
            cout<<st<<", "<<end<<endl;
            break;
        }
    }

    // majority element
    vector<int> vec1 = {1, 1, 1, 2, 2,2,2,3,3,3,3,3,3,3,3};
    int n = vec1.size();
    
    sort(vec1.begin(), vec1.end()); // Sort the array

    int freq = 1, maxFreq = 1, majorityElement = vec1[0];

    for (int i = 1; i < n; i++) {
        if (vec1[i] == vec1[i - 1]) {
            freq++;
        } else {
            freq = 1;
        }

        if (freq > maxFreq) {
            maxFreq = freq;
            majorityElement = vec1[i];
        }
    }
    if(maxFreq>n/2){
        cout<<"Majority Element is: "<<majorityElement<<endl;
    }

    int freq1 = 0, ans1 = 0;
    
    for (int num : vec1) {
        if (freq1==0){
            ans1=num;
        }
        else if(num==ans1){
            freq1++;
        }
        else{
            freq1--;
        }
    }
    //cout<<"Majority using moore's algo: "<<ans1<<endl; only works when majority element is there
    // else 
    int count = 0;
    for(int val:vec1){
        if (val==ans1){
            count++;
        }
    }
    if(count>n/2){
        cout<<"Majority element using moore's algo is :"<<ans1<<endl;
    }
    else{
        cout<<"No Majority Element";
    }

}