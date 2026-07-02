#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        int l;
        int r;
        cin >> n >> l >> r;
        vector<int> arr(n);
        for(int i =0 ;i < n ;i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        long long ans = 0;
        for(int i = 0; i < n; i++){
            int left = lower_bound(arr.begin() + i + 1, arr.end(), l - arr[i]) - arr.begin();
            int right = upper_bound(arr.begin() + i + 1, arr.end(), r - arr[i]) - arr.begin();
            ans += (right - left);
        }
        cout << ans << endl;
    }
}
