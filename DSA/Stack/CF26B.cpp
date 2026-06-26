#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<char> st;
    string s;
    cin >> s;
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '('){
            st.push('(');
        } else {
            if(!st.empty()){
                st.pop();
                count += 2;
            }
        }
    }
    cout << count << endl;
}