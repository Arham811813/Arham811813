#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define nl '\n'
#define nel cout<<nl
#define ll long long
using namespace std;
using namespace __gnu_pbds;

template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    pbds<int>p;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin>>val;
        p.insert(val);
    }
    while (m--)
    {
        int val;
        cin>>val;
        int ans = p.order_of_key(val + 1);
        cout<<ans<<" ";
    }
    
    return 0;
}