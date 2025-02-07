#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>ap = {2,3,5,7,11,13,17,19,23,29,31};
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
        map<int,vector<int>>mp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 11; j++)
            {
                if(v[i] % ap[j] == 0) {
                    mp[ap[j]].push_back(i);
                    break;
                }
            }
        }
        int seto = 1;
        for(auto [x,y] : mp) {
            // cout<<x<<" -> ";
            for(int val : y) v[val] = seto;
            seto++;
            // nel;
        }
        cout<<seto - 1<<nl;
        for(int val : v) cout<<val<<" ";
        nel;
    }
    return 0;
}