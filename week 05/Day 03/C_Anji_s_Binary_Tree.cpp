#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define nl '\n'
#define nel cout<<nl
#define ll long long
using namespace std;
using namespace __gnu_pbds;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int ans = INT_MAX;
vector<pair<int,int>>v(3e5+5);
string a;

void ser(int i,int cou);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        cin>>a;
        for (size_t i = 1; i <= n; i++)
        {
            int l,r;
            cin>>l>>r;
            v[i] = {l,r};
        }

        ser(1,0);
        cout<<ans<<nl;
        ans = INT_MAX;
        v.clear();
    }
    return 0;
}
void ser(int i,int cou) {
    auto [l,r] = v[i];
    if(l == 0 && r == 0) {
        ans = min(ans ,cou);
        return;
    }
    if(l != 0) {
        if(a[i-1] == 'L') {
           ser(l,cou);
        }else{
            ser(l,cou + 1);
        }
    }
    if(r != 0) {
        if(a[i-1] == 'R') {
           ser(r,cou);
        }else{
            ser(r,cou + 1);
        }
    }

}