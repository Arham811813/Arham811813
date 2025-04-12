#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define nl '\n'
#define nel cout<<nl
#define ll long long
using namespace std;
using namespace __gnu_pbds;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int N = 4e5;

vector<ll>v(N),t(N);

void build(int n,int b,int e){
    if(b == e) {
        t[n] = v[b];
        return;
    }
    int mid = (b + e) / 2,l = n*2,r = (n*2) + 1;
    build(l,b,mid);
    build(r,mid + 1,e);
    t[n] = t[l] + t[r];
}
void update (int n,int b,int e,int i,int v) {
    if(b > i || e < i) return;
    if(b == e && b == i) {
        t[n] = v;
        return;
    }
    int mid = (b + e) / 2,l = n*2,r = (n*2) + 1;
    update(l,b,mid,i,v);
    update(r,mid + 1,e,i,v);
    t[n] = t[l] + t[r];
}
ll quary(int n,int b,int e,int i,int j) {
    if(b > j || e < i) return 0;
    if(i <= b && e <= j) return t[n];
    int mid = (b + e) / 2,l = n*2,r = (n*2) + 1;
    return quary(l,b,mid,i,j) + quary(r,mid + 1,e,i,j);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    for (size_t i = 1; i <= n; i++) cin>>v[i];
    build(1,1,n);
    while (q--)
    {
        ll l,a,b;
        cin>>l>>a>>b;
        if(l == 2)
            cout<<quary(1,1,n,a + 1,b)<<nl;
        else {
            update(1,1,n,a + 1,b);
        }
            
    }
    return 0;
}