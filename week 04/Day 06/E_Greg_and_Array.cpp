#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define nl '\n'
#define nel cout << nl
#define ll long long
using namespace std;
using namespace __gnu_pbds;

template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> v(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    vector<ll>vv(n+2);
    vector<tuple<ll, ll, ll>> mm;
    for (int i = 0; i < m; i++)
    {
        ll l, r, val;
        cin>>l>>r>>val;
        mm.push_back({l, r, val});
    }
    vector<ll>cal(m + 2);
    while (k--)
    {
        ll l ,r ;
        cin>>l>>r;
        cal[l] += 1;
        cal[r + 1] -= 1;
    }

    for (size_t i = 1; i <= m; i++)
    {
        cal[i] = cal[i] + cal[i - 1];
    }

    ll l = 1;
    for(auto [x,y,z] : mm) {
        vv[x] += (z*cal[l]);
        vv[y + 1] -= (z*cal[l]);
        l++; 
    }

    for(int i = 1; i <= n ; i++) {
        vv[i] = vv[i] + vv[i - 1];
    }
    for (int i = 1; i <= n; i++)
    {
        cout<<v[i] + vv[i]<<" ";
    }

    nel;
    return 0;
}