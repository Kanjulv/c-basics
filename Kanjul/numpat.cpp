#include<iostream>
using namespace std;
int main()
{
    cout<<"enter any no.";
    int n;
    cin>>n;
    for(int i =1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        
        }
        for(int j=n-1;j<=0;j--){
            cout<<" ";
        }
        cout<<endl;
    }
}