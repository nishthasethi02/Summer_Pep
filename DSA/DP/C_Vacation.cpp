#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> dp(n, vector<int>(3));
    for(int i = 0; i < n; i++){
        int a, b, c;
        cin >> a >> b >> c;
        dp[i][0] = a;
        dp[i][1] = b;
        dp[i][2] = c;
    }
}