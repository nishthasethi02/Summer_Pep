// DFS
#include <bits/stdc++.h>
using namespace std;
vector<int> adj[100005];
vector<int> vis(100005, 0);
void dfs(int node){
    vis[node] = 1;
    cout << "node " << node << endl;
    for(auto child : adj[node]){
        cout << "child " << child << endl;
        if(vis[child]) continue;
        dfs(child);
    }
}
int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1);
}