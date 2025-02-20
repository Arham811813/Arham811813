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
    int n,k;
    cin>>n>>k;
    vector<int>v(n),ans;
    map<int,vector<int>>mp;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        mp[v[i]].push_back(i);
    }
    for(auto [x,y] : mp) {
        sort(mp[x].rbegin(),mp[x].rend());
    }
    pbds<pair<int,int>>p;
    int l ,r;
    l = r = 0;
    int pos = k / 2;
    if (k % 2 == 0)
    {
        pos--;
    }
    
    while (r < n)
    {
        p.insert({v[r],r});
        if(r - l + 1 == k){
            pair<int,int> val = *p.find_by_order(pos);
            ans.push_back(val.first);
            p.erase({v[l],mp[v[l]].back()});
            mp[v[l]].pop_back();
            l++;
        }
        r++;
    }
    for(int val : ans) {
        cout<<val<<" ";
    }
    return 0;
}