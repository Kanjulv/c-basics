#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter 3 nos"<<endl;
int a,b,c;
cin>>a>>b>>c;
if (a>b&&a>c){
cout<<"A is max";
}
else if(c>b&&c>a)
{
    cout<<"c is Max";
}
else if(b>a&&b>c)
{
    cout<<"b is Max";
}
return 0;
}
