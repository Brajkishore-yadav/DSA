#include<bits/stdc++.h>
using namespace std;
int main (){
        int t;
        cin>>t;
        int arr[t];
        for(int i=0;i<t;i++){
            cin>>arr[i];
        }
        set<int>st;
        for(int i=0;i<t;i++){
            st.insert(arr[i]);
        }
        int index=0;
        for(auto itr:st){
            arr[index]=itr;
            index++;
        }
        for(int i=0;i<index;i++){
            cout<<arr[i]<<" ";
        }
}