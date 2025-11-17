#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string braj(int N, string A) {
    
    string P = A;  
    int i = N - 1; 


    while (i >= 0) {
        if (P[i] != 'z') {  
            P[i] = P[i] + 1;
           
            for (int j = i + 1; j < N; j++) {
                P[j] = 'a';
            }
            break;
        } else {
            i--;  }
    }

    
    if (i == -1) {
        return "-1";
    }

    
    if (P > A && string(P.rbegin(), P.rend()) > A) {
        return P;
    } else {
        return "-1";
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        string A;
        cin >> N >> A;
        string res = braj(N, A);
        cout << res << endl;
    }
    return 0;
}
