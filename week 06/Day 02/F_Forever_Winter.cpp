#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define nl '\n'
#define nel cout<<nl
#define ll long long
using namespace std;
using namespace __gnu_pbds;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        int n,m,ans = 0;
        cin>>n>>m;
        vector<int>a[n  + 1];
        for (size_t i = 0; i < m; i++)
        {
            int u,v;
            cin>>u>>v;
            a[u].push_back(v);
            a[v].push_back(u);
        }
        int x,y,chi;
        for (size_t i = 0; i < n; i++)
        {
            if(a[i].size() == 1) {
                chi = a[i][0];
                break; 
            }
        }
        y = a[chi].size();
        for(int v : a[chi]) {
            if(a[v].size() != 1) {
                x = a[v] .size();
                break;
            }
        }
        cout<<x<<" "<<y - 1<<nl;
        
    }
    return 0;
}