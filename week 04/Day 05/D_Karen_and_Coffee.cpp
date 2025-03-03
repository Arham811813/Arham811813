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
        ll n,k,q;
        cin>>n>>k>>q;
        vector<ll>v(2e5 + 5),tra(2e5 + 5);
        vector<pair<ll,ll>>p;
        ll mx = LONG_LONG_MIN,mi = LONG_LONG_MAX,size = 0,ans = 0;
        for (ll i = 0; i < n; i++)
        {
            ll l,r;
            cin>>l>>r;
            mx = max({mx,l,r});
            mi = min({mi , l, r});
            v[l] += 1;
            v[r + 1] -= 1;
        }

        for (int i = mi; i <= mx; i++)
        {
            v[i] = v[i - 1] + v[i];
        }

        for(ll i = 0 ; i < q ; i++)
        {
            ll l ,r;
            cin>>l>>r;
            mx = max({mx,l,r});
            mi = min({mi , l, r});
            p.push_back({l,r});
        }

        for (int i = mi; i <= mx; i++)
        {
            if(k <= v[i]) size++;
            tra[i] = size;
        }

        for (int i = 0; i < q; i++)
        {
            cout<<(tra[p[i].second] - tra[p[i].first - 1]) <<nl;

        }
        
    return 0;
}