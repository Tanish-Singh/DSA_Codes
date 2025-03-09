#include <iostream>
#include <vector>
using namespace std;

int main(){
    // an array is given and in answer at particular index product of other elements are stored
    //like if 1 is present on i0 of num arra than in answer array elements of other numbers will be stored
    vector<int> num={1,2,3,4};
    vector<int> ans(num.size());
    for(int i=0; i<num.size(); i++){
        int prod=1;
        for(int j=0; j<num.size(); j++){
            if(i!=j){
                prod*=num[j];
            }
        }
        ans[i]=prod;
    }
    for(int val: ans){
        cout<<"Value Brute force in ans :"<<val<<endl;
    }
    // optimal approach // less time complexity but space complexity increases
    // find suffixes and prefixes 
    vector<int> suf(num.size());
    vector<int> pref(num.size());
    // to find preffixes
    pref[0]=1;
    suf[num.size()-1]=1;
    for(int pr=1;pr<num.size();pr++){
        pref[pr]=pref[pr-1]*num[pr-1];
    }
    // to find suffix
    for(int sf=num.size()-2;sf>=0;sf--){
        suf[sf]=suf[sf+1]*num[sf+1];
    }
    // loop 3 to print the answer
    for(int x=0;x<num.size();x++){
        cout<<"Value using optimal : "<<pref[x]*suf[x]<<endl;
    }

    // optimally reducing suf and preff arary
    vector<int> ans1(num.size());
    // to find preffixes
    ans1[0]=1;
    ans1[num.size()-1]=1;
    int suff=1;
    for(int pr=1;pr<num.size();pr++){
        ans1[pr]=ans1[pr-1]*num[pr-1];
    }
    // to find suffix
    for(int sf=num.size()-2;sf>=0;sf--){
        suff*=num[sf+1];
        ans1[sf]=suff;
    }
    // loop 3 to print the answer
    for(int x=0;x<num.size();x++){
        cout<<"Value using optimal with reduce space complexity : "<<ans1[x]<<endl;
    }
    
}