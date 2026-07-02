#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int y;
        cin >> y;
        vector<int>v(y);
        for(int i = 0; i < y; i++){
            cin >> v[i];
        }
        set<int> s;
        for(int i : v){
            s.insert(i);
        }
        vector<int>vec(s.begin(),s.end());
        int l = 0;
        int ans = 0;
        for(int i = 0; i < vec.size(); i++){
            while(vec[i]-vec[l]>=y){
                l++;
            }
            ans = max(ans, i - l + 1);
        }
        cout << ans <<endl;
    }
}