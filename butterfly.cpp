#include<iostream>
using namespace std;
int main()
{ 
    //entering value from the user
    cout<<"Enter any number";
    int n;
    cin>>n;
    //first loop to cover no. of loops 
    for(int i=1;i<=n;i++){
        //first half of butterfly
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        //loop for spaces
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        //second half of butterfly
        for(int j=1;j<=i;j++){
            cout<<"*";
        } 
        cout<<endl;
    }
    //repeating the same pattern but inverting 
    for(int i=n;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout<<"*";
        }
        for(int j=2*(n-i);j>=1;j--){
        cout<<" ";
        }
    for(int j=i;j>=1;j--){
        cout<<"*";
    }
    cout<<endl;

    }
}