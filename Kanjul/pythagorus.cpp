#include<iostream>
#include<climits>
using namespace std;
bool pytha(int p,int b,int h){
    if((p^2)+(b^2)==(h^2)){
    return true;
}
return false;
}

int main()
{
    cout<<"Enter the values of the triplet"<<endl;
    int a,b,c,hyp;
    cin>>a>>b>>c;
    hyp=max(a,b,c);
    if (hyp==a){
      cout<<pytha(b,c,a);
    }
    else if(hyp==b){
        cout<<pytha(c,a,b);
    }
     else {
        cout<<pytha(a,b,c);
    }
}