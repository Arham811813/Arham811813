#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    ll sum = 0;
    cin>>n>>q;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    vector<int>c(n+2);
    while (q--)
    {
        int l,r;
        cin>>l>>r;
        c[l] += 1;
        c[r+1] -= 1;
    }
    for (int i = 1; i <= n; i++)
    {
        c[i] = c[i - 1] + c[i];
    }
    sort(c.rbegin(),c.rend());
    sort(v.rbegin(),v.rend());
    for (int i = 0; i < n; i++)
    {
        sum += (1LL * c[i] * v[i]);
    }
    cout<<sum<<nl;
    return 0;
}