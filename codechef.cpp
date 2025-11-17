#include<bits/stdc++.h>
using namespace std;
int main (){
    int r;
    cin>>r;
    while(r--){
    int a,b,c,z,e;
    cin>>a;
    string t;
    cin>>t;
    for(int i=0;i<a;i++){
        if(t[i]!=z){
            b=(int)t[i];
            c=b+1;
            t[i]=(char)c;
        }
            
    }
   if(a>1){
    cout<<t<<"\n";
   }
   else if(a==1 && t[0]==z){
    int f=-1;
   cout<<f<<"\n";
}
}
}
