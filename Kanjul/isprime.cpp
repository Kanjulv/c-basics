#include<iostream>
using namespace std;
bool prime(int n){
        int count=0;
        for(int i=1;i<=n;i++){
            count++;
            if(count>2){
                return false;
            } }
                return true;
            }
        int main()
{
        cout<<"Enter the limits"<<endl;
    int a;
    cin>>a;
    int b;
    cin>>b;
    for(int i=a;i<=b;i++){
        if(prime(i)){
            cout<<i;
        }

    }
}

    