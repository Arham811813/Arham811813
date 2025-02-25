#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define nl '\n'
#define nel cout<<nl
#define ll long long
using namespace std;
using namespace __gnu_pbds;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,cnt = 0;
    string a,b;
    pbds<int>p;
    map<char,vector<int>>m;
    vector<int>v;
    cin>>n;
    cin>>a;
    b = a;
    reverse(b.begin(),b.end());
    
    for (int i = 0; i < n; i++)
    {
        m[a[i]].push_back(i);
    }

    for(auto [x,y] : m) {
        sort(m[x].rbegin(),m[x].rend());
    }
    
    for (int i = 0; i < n; i++)
    {
        v.push_back(m[b[i]].back());
        m[b[i]].pop_back();
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cnt += p.order_of_key(v[i]);
        p.insert(v[i]);
    }
    
    cout<<cnt<<nl;

    return 0;
}