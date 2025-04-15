#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define nl '\n'
#define nel cout<<nl
#define ll long long
using namespace std;
using namespace __gnu_pbds;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int N = 4e5 + 5;
vector<int>v(N),MI(N);

void build(int n,int b,int e) {
    if(b == e) {
        MI[n] = v[b];
        return;
    }
    int mid = (b + e) / 2, l = 2*n , r = 2*n + 1;
    build(l,b,mid);
    build(r,mid+1,e);
    MI[n] = min(MI[l],MI[r]);
}
void update(int n,int b,int e,int i,int val) {
    if(i < b || i > e) return;
    if(b == e) {
        MI[n] = val;
        return;
    } 
    int mid = (b + e) / 2, l = 2 * n, r = 2*n + 1;
    update(l,b,mid,i,val);
    update(r,mid + 1,e,i,val);
    MI[n] = min(MI[l],MI[r]);
}
int quary(int n,int b,int e,int i,int j) {
    if(b > j || e < i) return INT_MAX;
    if(i <= b && e <= j) return MI[n];
    int mid = (b + e) / 2, l = 2*n, r = 2*n + 1;
    
    return min(quary(l,b,mid,i,j),quary(r,mid + 1,e,i,j));
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
        int n,q;
        cin>>n>>q;
        for (int i = 1; i <= n; i++) cin>>v[i];

        build(1,1,n);
       
        while (q--)
        {
            int a,b,c;
            cin>>a>>b>>c;
            if(a == 2) cout<<quary(1,1,n,b + 1,c)<<nl;
            else update(1,1,n,b + 1,c);
        }
    return 0;
}