#include <iostream>
using namespace std;

// to declare a global var we can do this
int y=23; // this is global and can be accessed from anywhere

int main(){
    if(3<4){
        int x = 23;
    }
    // cout<<x; // this gives error as x  is locally within if, similarly in loop as well as outer funtion
    // this will not be accessible
    cout<<y; // this doesnt causes errors
    return 0;
}