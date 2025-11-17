#include<iostream>
using namespace std;
int count(int n){
    // int cnt=0;  
    // while(n>0){
    //     cnt=cnt+1;
    //     n=n/10;
    // }
    int cnt=(int)(log10(n)+1);//because log jitne digit h usse ek km btatta h

    return cnt;
}
int main (){
    int n;
    cin>>n;
    int r=count(n);
    cout<<r;
}