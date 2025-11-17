#include<bits/stdc++.h>
using namespace std;
int main (){
    vector<int> v;
    v.push_back(1);
    // Emplace back is similar to push back 
    v.emplace_back(2);
    // vector of pairs
    vector<pair<int, int>> vec;
    vec.push_back({1,2});
    //Syntax are different of both 
    //Emplace backs consider input automatically as pair(datatype you need)
    vec.emplace_back(1,2);
    //to declare vector with already defined elements and the size too
    vector<int> v1 = { 1, 2, 3, 4, 5, 6, 7, 8 };
    // here 5 is size and the elements are 100
    // to copy a vector into another vector
    vector<int> v2(v1);
    // To access vector elements 
//     for(vector<int>::iterator it = v.begin(); it !=v.end(); it++){
//         cout<<*(it)<<" ";
//     } 
//    /******************************/
for(auto itr:v1){
    cout<<itr<<" ";
}
   // to delete single elments
   v1.erase(v1.begin()+1);
   // to delete elements in range
   v1.erase(v1.begin()+1,v1.end()+3);  //[ Start , End )
    
   //Insert function
   vector<int> v3(2,100);
   v3.insert(v3.begin(),300);
   v3.insert(v3.begin()+1 , 2 , 10);  
}