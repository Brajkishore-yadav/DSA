#include<bits/stdc++.h>
using namespace std;
void f(int i,vector<int>&ds,int s, int arr[],int n,int sum){
if(i==n){
    if(s==sum){
    for(auto it :ds){
    cout<<it<<" ";
    }
    cout<<endl;
}
    return;
}
ds.push_back(arr[i]);//pick
s=s+arr[i];
f(i+1,ds,s,arr,n,sum);
s=s-arr[i];
ds.pop_back();//unpick
f(i+1,ds,s,arr,n,sum);
}

int main(){
    int arr[]={1,2,1};
    int n=3;
    int sum=2;
    vector<int>ds;
    f(0,ds,0,arr,n,sum);
}