#include<iostream>
using namespace std;
int main(){
    cout<<"Enter size of the array"<<endl;
    int n;
    cin>>n;
    cout<<"Enter nos of the array"<<endl;
    for(int i=0;i<n;i++){
    int arr[n];
    cin>>arr[n];
    int temp;
    for(int k=0;k<n-1;k++){
        for(int j =i;j<i+1;j++){
            if(arr[k]>arr[j]){
                temp=arr[k];
                arr[k]=arr[j];
                arr[j]=temp;
                cout<<k;
            }
        }

    }
    }


}