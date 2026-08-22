// Take a number from the user and check whether it exists in the array.
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
    cout<<"enter the target element"<<"\n";
    int target;
    cin>>target;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            cout<<"Element found at index "<<i<<endl;
            return 0;
        }
    }
    cout<<"Element not found"<<endl;
    return 0;
}