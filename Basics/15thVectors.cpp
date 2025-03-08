#include <iostream>
#include <vector> //#include <bits/c++.h> can be used but this is orgs can create namespace erros
// although not an error but better to use particular 
using namespace std;
int main(){
    vector<int> vec; // empty vector

    vector<int> vec1 = {1,2,3}; // with element
    cout<<vec1[0]<<endl;

    vector <int> vec2(5,0); // first is size of vector and after that is value at every index

    cout<<vec2[0];
    cout<<vec2[1];
    cout<<vec2[2];
    cout<<vec2[3];
    cout<<vec2[4]<<endl;

    // special loop for vectors is for each loop
    for(int i: vec1){
        cout<<i<<endl;
    }

    cout<<"size : "<<vec1.size()<<endl;

    // to push 
    vec1.push_back(8);
    cout<<"Push element at last : "<< vec1[3]<<endl;

    // pop back 
    vec1.pop_back();// to remove value from last

    // to see element at first and last and at a particular index
    cout<<"Front of vetor "<<vec1.front()<<endl;
    cout<<"Front of vetor "<<vec1.back()<<endl;
    cout<<"Front of vetor "<<vec1.at(1)<<endl; // value at a particular index works as vec1[i]

    return 0;
}