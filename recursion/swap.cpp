#include <bits/stdc++.h>
using namespace std;

int a[5] = {1, 2, 3, 4, 5};   // initialize globally (allowed)

void srwap(int l, int r){
    if(l >= r){
        return;
    }
    swap(a[l], a[r]);
    srwap(l+1, r-1);
}

int main(){
    srwap(0, 4);

    for(int i = 0; i < 5; i++){
        cout << a[i];
    }
}
