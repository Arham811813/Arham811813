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
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>v(n+1);
        for (int i = 1; i <= n; i++) {
            cin>>v[i];
        }
        vector<pair<int,int>>p;
        bool f = 0;
        for (size_t i = 1; i <= n; i++)
        {
            if(v[1] != v[i]) {
                f = 1;
                break;
            } 
        }
        if(!f) {
            cout<<"NO\n";
        }else{

            int dis = -1;
            bool roc = 0;
            for (size_t i = 2; i <= n; i++)
            {
                if(v[1] != v[i]) {
                    p.push_back({1,i});
                    dis = i;
                }
                else 
                    roc = 1;
            }
            if(roc) {
                for (size_t i = 2; i <= n; i++)
                {
                    if(v[1] == v[i]) p.push_back({dis,i});
                }
                
            }
            cout<<"YES\n";
            for(auto [x,y] : p) cout<<x<<" "<<y<<nl;
        }
    }
    return 0;
}