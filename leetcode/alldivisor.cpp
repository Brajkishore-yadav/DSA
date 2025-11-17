#include<iostream>
using namespace std;
// int main (){
//     int t;
//     cin>>t;
//     for(int i=1;i<=t;i++){
//         if(t%i==0){
//             cout<<i<<" ";
//         }
//     }
// }
void div(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}
int main (){
    int n;
    cin>>n;
    div(n);
    return 0;
}