#include<bits/stdc++.h>
using namespace std;
int main (){
    vector<int >a;
    for(int i=0;i<5;i++){
        int c;
        cin>>c;
     a.push_back(c);
    }
    for(auto itr:a){
        cout<<itr<<" ";
    }
    a.erase(a.begin()+1,a.begin()+2);
    for(auto nyt:a){
        cout<<nyt<<" ";
    }
}