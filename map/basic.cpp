#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    map<int,int>mpp;
    for(int i=0;i<t;i++){
        mpp[arr[i]]++;
    }
    // for(auto itr:mpp){
    //     cout<<itr.first <<"->"<<itr.second <<endl;
    // }for iteration
    int c;
    cin>>c;
    int n;
    for(int i=0;i<c;i++){
        cin>>n;
        cout<<mpp[n]<<endl;
    }
}