#include<bits/stdc++.h>
using namespace std;
int main (){
string c;
    cin>>c;
    int hash[26]={0};
    for(int i=0;i<c.size();i++){
        hash[c[i]-'a']++;
    }
   int t;
   cin>>t;
   while(t--){
    char c;
    cin>>c;
    cout<<hash[c-'a']<<endl;
   }
}