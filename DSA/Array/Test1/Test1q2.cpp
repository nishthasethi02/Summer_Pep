#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        string s;
        cin >> s;
        set<char> st;
        vector<int> p(x), sf(x);
        for(int i = 0; i < x; i++){
            st.insert(s[i]);
            p[i] = st.size();
        }
        set<char> st1;
        for(int i = x - 1; i >= 0; i--){
            st1.insert(s[i]);
            sf[i] = st1.size();
        }
        int ans = 0;
        for(int i = 0; i < x - 1; i++){
            ans = max(ans, p[i] + sf[i + 1]);
        }
        cout << ans << endl;
    }
}