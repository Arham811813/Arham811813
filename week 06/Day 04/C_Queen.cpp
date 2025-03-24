#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define nl '\n'
#define nel cout << nl
#define ll long long
using namespace std;
using namespace __gnu_pbds;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int n,m = 0;
   cin >> n;
   vector<int>v(n + 1,0);
   for (size_t i = 1; i <= n; i++)
   {
      int a,b;
      cin>>a>>b;
      if(b == 0) {
         v[i] = 1;
         if(a != -1) v[a] = 1;
      }
   }
   for (size_t i = 1; i <= n; i++)
   {
      if(!v[i]) {
         cout<<i<<" ";
         m = 1;
      }
   }
   if(!m) cout<<-1<<nl;
}