#include<iostream>
using namespace std;
//calculating ncr of each row
//pasting the factorial function
int fac(int n){
int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;}
        return fact;
}
int main()
{
    
    cout<<"Enter the value of rows"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            int diff=i-j;
    int fact1=fac(i);
    int fact2=fac(diff);
    int fact3=fac(j);
    cout<<fact1/(fact2*fact3)<<" ";

        }
         cout<<endl;
    }
   
    
}


