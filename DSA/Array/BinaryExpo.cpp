// Binary Exponentiation
#include <bits/stdc++.h>
using namespace std;

int bin(int a, int b){
    if(b == 0) return 1;

    int ans = bin(a, b / 2);
    if(b % 2 == 0){
        ans *= ans; //  (ans = (ans * ans) % mod);
    }
    else{
        ans = a * ans * ans; // (ans = (a * ans * ans) % mod);
    }
    return ans;
}
int main(){
    int m, n;
    cin >> m >> n;
    cout << bin(m, n) << endl;
}