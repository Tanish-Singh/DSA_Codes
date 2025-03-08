#include <iostream>
using namespace std;

int main(){

    cout << "Enter the number: ";
    int n;
    cin >> n;

    // cout<<"Nested loop \n";

    // for(int j = 0; j<4; j++){
    //     for(int k = 0; k<4; k++){
    //         cout<< "*";
    //     }
    //     cout << endl;
    // }

    // --------------------------------q1
    

    // for(int i = 1; i<=n; i++){
    //     for (int j=1; j<=n; j++){
    //         cout << j;
    //     }
    //     cout<<"\n";
    // }

    //-------------------------------q2

    // for(int i = 0; i<n; i++){
    //     for (int j=1; j<=n; j++){
    //         cout << "* ";
    //     }
    //     cout<<"\n";
    // }

    //-----------------------------q3

    // for(int i = 0; i<n; i++){
    //     for (int j=0; j<=n; j++){
    //         cout << (char(j+65)) << " ";
    //     }
    //     cout<<"\n";
    // }

    // // or
    
    // for(int i = 0; i<n; i++){
    //     char ch = 'A';
    //     for (int j=0; j<=n; j++){
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout<<"\n";
    // }

    //---------------------------q3

    // int num = 1;
    // for(int i =0; i<n; i++){
    //     for(int j = 0; j<n; j++){
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout<<"\n";
    // }

    // // character 
    // int num = 1;
    // for(int i =0; i<n; i++){
    //     for(int j = 0; j<n; j++){
    //         cout << char(num+64) << " ";
    //         num++;
    //     }
    //     cout<<"\n";
    // }

    //--------------------------------------q4

    // for(int i=0; i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout << "* ";
    //     }
    //     cout<<"\n";
    // }

    //------------------------------------q5

    // int num =1;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<i+1; j++){
    //         cout<< num<< " ";
    //         num+=1;
    //     }
    //     cout<<"\n";
    // }

    //-----------------------------------q6

    // for(int i=0; i<n; i++){
    //     for(int j = 0; j<i+1;j++){
    //         cout<< i+1<<" ";  // for chars do char(i+65)
    //     }
    //     cout<<"\n";
    // }

    //----------------------------------q7

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<i+1;j++){
    //         cout<<j+1<<" ";
    //     }
    //     cout<<"\n";
    // }

    //------------------------------q8

    // for(int i=0;i<n;i++){
    //     for(int j = n-i; j>0;j--){
    //         cout<<"* ";
    //     }
    //     cout<<"\n";
    // }

    // for(int i=0; i<n;i++){
    //     for (int j=i+1; j>0; j-- ){
    //         cout<<j<<" ";
    //     }
    //     cout<<"\n";
    // }


    //-----------------------------------------------q9
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<i;j++){
    //         cout<<"  ";
    //     }
    //     for(int k=n-i; k>0; k--){
    //         cout<<i+1<<" ";
    //     }
    //     cout<<"\n";
    // }

    //-----------------------------------------------q10

    // for(int i=0; i<n; i++){
    //     for(int j=n-i-1; j>0;j--){
    //         cout<<"  ";
    //     }
    //     for(int j=0;j<i+1; j++){
    //         cout<< j+1<<" ";
    //     }
    //     for(int j=i; j>0;j--){
    //         cout<< j<<" ";
    //     }
    //     cout<<"\n";
    // }

    //=============================================q11 Hollow Diamond

    // for(int i=0;i<n;i++){
    //     //upper hald
    //     for(int j=0; j<n-i-1;j++){
    //         cout<<" ";
    //     }
    //     cout<<"*";
    //     if(i!=0){
    //         for(int j = 0; j<=2*i-1; j++){
    //             cout<<" ";
    //         }
    //         cout<<"*";
    //     }
    //     cout<<"\n";
        
    // }
    // for(int i = 0; i<n-1;i++){
    //     for(int j=0; j<i+1;j++){
    //         cout<<" ";
    //     }
    //     cout<<"*";
    //     if(i!=n-2){ // as it should runs 1 time less then the loop so equally here we need n-2
    //         for(int j=0; j<2*(n-i)-5;j++){ //for 0 it gives 3, for 1 it gives one space , just a logic
    //             cout<<" ";
    //         }
    //         cout<<"*";
    //     }
    //     cout<<"\n";

    // }

    return 0;
}