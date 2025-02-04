#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
#define ll long long
using namespace std;
bool cp(ll n){
    if (n == 1) return false;
    for (int i = 2 ; i * i <= n ; i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}
bool sq(ll n) {
    ll x = sqrtl(n);
    return x*x == n;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<ll>v(n);
    for (int i = 0; i < n; i++)
    {
        ll val;
        cin>>val;
        if(sq(val) && cp(sqrtl(val))) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}