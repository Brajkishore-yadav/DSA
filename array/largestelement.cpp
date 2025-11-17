#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=1;i<t;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    // cout<<max;
    // sort(arr,arr+t);
    // cout<<arr[t-1];
    cout<<max;
}