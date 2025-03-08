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

    // static vs Dynamic memory 
    // static - memory allocated at compile time. used in stack
    // dynamic = memory allocation at run time. used in heap
    // vector<int> vec; so if we push 0 into it, so it is stored in memroy as arrya
    // when we again push somevalue as previous array is fill with zero so know a new array
    // will be created of double the size of previous one and will be storing the new values. 
    /* there are two properteis of vector 1. size of number of ekements and 2. capacity of vector
    so like for three elements.*/

    vector<int> vec3;
    vec3.push_back(0);
    vec3.push_back(1);
    vec3.push_back(2);

    // size will give the no of elemnts
    cout<<"Size of vector "<<vec3.size()<<endl;
    // capacity will give total number of elements possibly it can store
    cout<<"Capacity of Vector "<<vec3.capacity()<<endl;
    return 0;
}