#include<bits/stdc++.h>
using namespace std;
void tasic(){
   vector<int>ls;
   int c;
   for(int i=0;i<5;i++){
    cin>>c;
    ls.push_back(c);
   }
   sort(ls.begin(),ls.end());

for(auto itr:ls){
    cout<<itr<<" ";
}
}
int main(){
    tasic();
}