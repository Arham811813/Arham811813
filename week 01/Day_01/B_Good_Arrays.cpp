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
        ll n,one = 0,sum = 0;
        cin>>n;
        vector<ll>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            sum+=v[i];
            if(v[i] == 1) one++;
        }
        if(n == 1) 
        {
            cout<<"NO\n";
            continue;
        }
        cout<<(sum - one < n?"NO\n":"YES\n");
    }
    return 0;
}