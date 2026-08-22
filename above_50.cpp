// Count numbers greater than 50 in an array
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
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>50){
            count++;
        }
    }
    cout<<"numbers greater than 50 in the array are: "<<count<<"\n";
    return 0;
}