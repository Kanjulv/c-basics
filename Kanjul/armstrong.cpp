#include<iostream>
using namespace std;
int main()
{
    cout<<"enter any no"<<endl;
    int n;
    cin>>n;
    //Armstrong no. me given no. ka har digit ka cube krte h indivisually aur phir usse add krte h aur add krke agr wahi no. ata h to vo arm. no h
   //seperating the digits
    int ld;
    int original=n;
    int sum=0;
    while(n>0){
    ld=n%10;
    sum+=(ld*ld*ld);
    n=n/10;
    }
    if(sum==original){
        cout<<"Armstrong no."<<endl;
    }
else {
    cout<<"Not an Armstrong no.";
}
}

