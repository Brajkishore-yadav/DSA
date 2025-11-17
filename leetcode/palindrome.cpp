#include<iostream>
using namespace std;
int main (){
    int t;
    cin>>t;
    int rev=0;
    int n=t;
    while(t>0){
        int u=t%10;
        rev=(rev*10)+u;
        t=t/10;
    }
    if(n==rev){
        cout<<" no is palindrome";
    }
}
