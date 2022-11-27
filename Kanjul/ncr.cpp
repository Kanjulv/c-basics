#include<iostream>
using namespace std;
//ncr=n!/(n-r)!*r!
//pasting factorial function from previous function
int fac(int n){
int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;}
        return fact;
}
int main()
{
    
    cout<<"Enter two nos"<<endl;
    int n,r;
    cin>>n>>r;
    int diff=n-r;
    int fact1=fac(n);
    int fact2=fac(diff);
    int fact3=fac(r);
    cout<<fact1/(fact2*fact3)<<endl;
}



