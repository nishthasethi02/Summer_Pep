// Que 1.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int l;
        int r;
        cin>>l>>r;
        int ans = 0;
        int maxdiff = -1;
        for(int i = l; i <= min(r, l + 100); i++){
            int num = i;
            int maxdig = 0;
            int mindig = 9;
            while (num > 0){
                int dig = num % 10;
                maxdig = max(dig,maxdig);
                mindig = min(dig,mindig);
                num /= 10;
            }
            int luckynumber = maxdig - mindig;
            if(luckynumber > maxdiff){
                maxdiff = luckynumber;
                ans = i;
            }
        }
        cout << ans <<endl;
    }
}