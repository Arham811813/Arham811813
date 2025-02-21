// #include <bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>

// #define nl '\n'
// #define nel cout<<nl
// #define ll long long
// using namespace std;
// using namespace __gnu_pbds;

// template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     while (t--) {
//         ll n,cnt = 0;
//         cin>>n;
//         vector<ll>v(n);
//         pbds<ll>p;
//         for (int i = 0; i < n; i++)
//         {
//             cin>>v[i];
//             p.insert(v[i]);
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cnt+=p.order_of_key(v[i]);
//             p.erase(v[i]);
//         }
//         cout<<cnt<<nl;
//     }
//     return 0;
// }
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
        ll n,cnt = 0;
        cin>>n;
        vector<ll>v(n);
        pbds<ll>p;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        for (int i = n-1; i >= 0; i--)
        {
            cnt+=p.order_of_key(v[i]);
            p.insert(v[i]);
        }
        cout<<cnt<<nl;
    }
    return 0;
}