// Prefix Sum

#include <iostream>
using namespace std; 

int main() {
    int arr[] = {2, 4, 6, 9, 1, 15};
    int n = 6;
    int prefixarr[n];
    prefixarr[0] = arr[0];
    for(int i = 1; i < n; i++){
        prefixarr[i] = prefixarr[i-1] + arr[i];
    }
    int l, r;
    cin >> l >> r;
    int sum = 0;
    //edge case when l = 0
    if (l == 0)
        sum = prefixarr[r];
    else
        sum = prefixarr[r] - prefixarr[l - 1];
    cout << sum;
    return 0;
}

