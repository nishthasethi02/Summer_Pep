/* DFS
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
*/

// Print parents of each node in a graph using DFS
// 1 -> 2 -> 3 -> 4,5
#include <bits/stdc++.h>
using namespace std;
vector<int> adj[100005];
vector<int> vis(100005, 0);
vector<int> parent(100005, -1);
void dfs(int node){
    vis[node] = 1;
    for(auto child : adj[node]){
        // print parent of each node
        if(vis[child]) continue;
        parent[child] = node;
        dfs(child);
    }
}
int main(){
    int n, m; // number of nodes and edges
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1);
    for(int i = 1; i <= n; i++){
        cout << "Parent of node " << i << " is " << parent[i] << endl;
    }
}

// https://cses.fi/problemset/task/1667

// https://cses.fi/problemset/task/1666/