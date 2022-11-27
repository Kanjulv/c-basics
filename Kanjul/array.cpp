#include<iostream>
#include<climits>
using namespace std;
int main(){
    cout<<"Enter size of an array"<<endl;
    int n;
    cin>>n;
    cout<<"Enter elements of the array"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    int maxno=INT_MIN;
    maxno=max(maxno,arr[i]);
    cout<<maxno;
    }
}


    


