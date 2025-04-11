#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t;
    cin>>n>>t;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    
    auto ok = [&](ll s) {
        ll cnt = 0;
        for(int i = 0; i<n;i++) {
            cnt+= (s/v[i]);
            if(cnt >= t) return 1;
        }
        return 0;
    };

    ll l = 1,r = 1e18,mid = l + (r - l) / 2,ans = 0; 
    while (l <= r)
    {
        if(ok(mid)){
            ans = mid;
            r = mid - 1;
        }else{
            l = mid + 1;
        }
        mid = l + (r - l) / 2;
    }
    cout<<ans<<nl;
    return 0;
}