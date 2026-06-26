// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int m;
//     cin>>m;
//     while(m--){
//         int n, q;
//         cin>>n>>q;
//         int arr[n];
//         for(int i=0; i<n; i++){
//             cin>>arr[i];
//         }
//         sort(arr, arr+n, greater<int>());
//         for(int i = 1; i < n; i++){
//             arr[i]+=arr[i-1];
//         }
//         while(q--){
//             int x;
//             cin >> x;
//             int ans = lower_bound(arr, arr+n, x) - arr;
//             if(ans == n){
//                 cout << -1 << endl;
//             }
//             else{
//                 cout << ans + 1 << endl;
//             }
//         }
//     }

// }
