// Print array in reverse order.
#include <bits/stdc++.h>
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
    cout<<"array in reverse order are"<<"\n";
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<"\n";
    }
    return 0;
}   
