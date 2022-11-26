#include<iostream>
using namespace std;
int main(){
    //Entering size of array from user
cout<<"Enter the size of the array"<<endl;
int n;
cin>>n;
//entering values of array from the user
cout<<"Enter values in the array"<<endl;
int arr[n];
//loop to enter values
for(int i=0;i<n;i++){
    cin>>arr[i];
}//First loop to calculate the no of times the iteration will run
for(int i=1;i<n;i++){
    //storing values of array in current variable
    int current=arr[i];
    int j=i-1;
    //second loop to sort the elements
    while(j>=0 && current>arr[j]){
        arr[j+1]=arr[j];
        j--;
    }
    //placing elements in their supposed position 
    arr[j+1]=current;
}
for(int i=0;i<n;i++){
    cout<<arr[i];
}
cout<<endl;
}