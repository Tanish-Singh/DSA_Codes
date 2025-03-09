#include <iostream>
#include <vector>
using namespace std;

int main(){
    int x=3,n=5;
    long binForm=n;
    int ans = 1;
    while(binForm>0){
        if(binForm%2==1){
            ans*=x;
        }
        x*=x;
        binForm/=2;// in binary form it will drop off
    }
    cout<<ans<<endl;

    // buy and sell stock
    vector<int> vec={7,1,5,3,6,4};
    int n1=vec.size();
    int maxProfit = 0;
    int bestBuy = 1;
    for(int i=1; i<n1;i++){
        if(vec[i]>bestBuy){
            maxProfit=max(maxProfit,vec[i]-bestBuy); // to keep best buys day - least buying price to get
            // max profit
        }
        bestBuy=min(bestBuy, vec[i]); // to keep this minimum
    }
    cout<<"MaxProfit : "<<maxProfit<<endl;
}