int secondLargest(vector<int>& v) {
    int mx1 = INT_MIN;     // largest
    int mx2 = INT_MIN;     // second largest

    for(int x : v) {
        if (x > mx1) {
            mx2 = mx1;     // old largest becomes second largest
            mx1 = x;       // new largest
        }
        else if (x > mx2 && x != mx1) {
            mx2 = x;       // x is second largest
        }
    }

    return mx2;
}
