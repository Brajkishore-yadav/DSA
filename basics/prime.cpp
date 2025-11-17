#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int i=1;
   int count=0;
while(i<=a){
    if(a%i==0){
        count++;
  
    }
    i++;
}
if(count==2){
    cout<<"prime";
}
else{
    cout<<"composite";
}

}