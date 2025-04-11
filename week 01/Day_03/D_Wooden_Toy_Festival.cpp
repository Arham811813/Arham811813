#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());

        auto ok = [&] (int ti){
            int l = 0 ,r = 0,cnt = 1;
            while (r < n)
            {
                if(v[r] - v[l] > 2*ti){
                    cnt++;
                    l = r;
                }else{
                    r++;
                }
            }
            return cnt <= 3;
        };

        int l = 0,r = 1e9,mid,ans ;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if(ok(mid)){
                ans = mid;
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}