#include<bits/stdc++.h>
using namespace std;
void explainlist(){
list<int>ls;
ls.push_back(2);//{2}
ls.emplace_back(4);//{2,4}
ls.push_front(5);//{5,2,4}
ls.emplace_front();


    for(auto itr:ls){
       cout<<itr<<" ";
    }
}
int main (){
   explainlist();
}