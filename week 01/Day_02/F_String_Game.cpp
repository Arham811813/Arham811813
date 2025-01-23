#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string a,b;
    cin>>a>>b;
    int n = a.size(),m = b.size();
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    auto ok = [&] (int dle){
        string c = a;
        for (int i = 0; i < dle; i++)
        {
            c[v[i] - 1] = '?';
        }
        int i,j;
        i = j = 0;
        while (i != n)
        {
            if(c[i] == b[j]){
                i++,j++;
            }else{
                i++;
            }
        }
        return j == m ;
    };

    int l = 0,r = n - 1,ans = 0,mid = l + (r - l) / 2;
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