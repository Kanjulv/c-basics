#include<iostream>
#include<math.h>
using namespace std;
int main(){
//entering value from user and storing in highest data type
cout<<"Enter any value"<<endl;
double n;
cin>>n;
int check;
check=sizeof(n);
if(ceil(n)==floor(n)){
if(check==2){
    cout<<"Short";
} 
else if(check==4){
    cout<<"Int";
}
else if(check==8){
    cout<<"Long";
}
}
else{
if(check==4){
    cout<<"Float";
}
else if(check==8){
    cout<<"Double";
}
}
}



