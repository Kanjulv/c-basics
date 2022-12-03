#include<iostream>
using namespace std;
int main(){
    cout<<"Enter any number";
    int n;
    cin>>n;
    for(int i =1;i<=n;i++){
        int temp=(n+1)-i;
        for(int j =1;j<=temp;j++){
            cout<<j;
        }
        for(int j=0;j<=(n-1);j++){
            cout<<" ";
        }
        cout<<endl;
    }
    
}

