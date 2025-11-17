#include<bits/stdc++.h>
using namespace std;
int main (){
    vector<int> v;
    v.push_back(1);
    // Emplace back is similar to push back 
    v.emplace_back(2);
    // vector of pairs
    vector< pair<int, int> > vec;
   
    vec.emplace_back(1,2);
    //to declare vector with already defined elements and the size too
    vector<int> v1(5,100);
    // here 5 is size and the elements are 100

    // to copy a vector into another vector
    vector<int> v2(v1);
    // To access vector elements 
    for(vector<int>::iterator it = v.begin(); it !=v.end(); it++){
        cout<<*(it)<<" ";
    }  
    // now 
}