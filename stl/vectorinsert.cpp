#include<bits/stdc++.h>
using namespace std;
int main (){
    vector<int>v(2,100);//{100,100}
    v.insert(v.begin(),300);//{300,100,100}
    v.insert(v.begin()+1,5,10);//{300,10,100,100}
    for(auto itr:v){
cout<<itr<<" ";
}
    }
  