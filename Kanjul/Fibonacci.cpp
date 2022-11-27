#include<iostream>
using namespace std;
int main()
{
    //fibonacci is a series in which third element is the sum of first 2;
    cout<<"Enter any no.";
    int n;
    cin>>n;
    int t1=0,t2=1,next;
    for(int i=0;i<=n;i++){
        next=t1+t2;
        t1=t2;
        t2=next;
        cout<<t1;
    }
}
    