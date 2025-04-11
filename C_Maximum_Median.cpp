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
    sort(v.begin(),v.end());
    auto ok = [&] (int op){
        ll cnt = 0;
        for (int i = n/2; i < n; i++)
        {
            cnt+=(v[i] >= op?0 : op - v[i]);
            if(cnt > t) return 0;
        }
        return 1;
    };

    int l = 1,r = 2e9,mid = l + (r - l) / 2,ans = 0;
    while (l <= r)
    {
        if(ok(mid)){
            ans = mid;
            l = mid + 1;
        }else{
            r = mid - 1;
        }
        mid = l + (r - l) / 2;
    }
    cout<<ans<<nl;
    return 0;
}