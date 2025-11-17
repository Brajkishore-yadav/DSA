#include<bits/stdc++.h>
using namespace std;
int main (){
     vector<int >a;
    for(int i=0;i<5;i++){
        int c;
        cin>>c;
     a.push_back(c);//mtlb c vector ka element bnao
    }
     vector<int> copy(2,100);
     a.insert(a.begin(),copy.begin(),copy.end());
    cout<<a.size()<<" ";
    cout<<copy.size()<<" ";
    a.swap(copy);
    a.pop_back();//{10,20}->{10}
    
    }
