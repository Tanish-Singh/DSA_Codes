#include <iostream>
#include <vector>
using namespace std;

int main(){
    // brute force approach

    vector<int> hieghts={1,8,6,2,5,4,8,3,7};
    int maxWater=0, area = 0; 
    int minHeight;
    for(int i=0; i<hieghts.size();i++){
        for(int j=i+1; j<hieghts.size(); j++){
            minHeight=min(hieghts[i],hieghts[j]);
            area=minHeight*(j-i);
            maxWater=max(area,maxWater);
        }
    }
    cout<<"Brute Force approach to minimum water : "<<maxWater<<endl;
    // this gives TLE as a code execution takes 10^8 ops but in this code n goes to 10^5 and as we have
    // give o(n^2) so it will take 2^10 hence giving TLE so better use
    // two pointer approach
    int st=0;
    int end=hieghts.size()-1;
    int mh;
    int mW=0;
    int ar = 0;
    while(st<end){
        mh=min(hieghts[st],hieghts[end]);
        area=mh*(end-st);
        mW=max(mW,area);
        hieghts[st]<hieghts[end]?st++:end--; // in cases if height is less it wont yeild in more water
    }
    cout<<"Optimal 2 pointer approach : "<<mW<<endl;
}