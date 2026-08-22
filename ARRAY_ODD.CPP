// Use a loop to print all odd numbers from an array.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the array size"<<"\n";
    cin>>n;

    int arr[n];
    cout<<"enter the array elements"<<"\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"odd numbers in the array are"<<"\n";
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            cout<<arr[i]<<"\n";
        }
    }
    return 0;
}