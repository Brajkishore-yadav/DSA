#include<iostream>
using namespace std;
int main (){
    int t;
    cin>>t;
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=t;i++){
        int nextnumber=a+b;
        cout<<nextnumber<<" ";
        a=b;
        b=nextnumber;
    }
}