// class Solution {
//     public:
//         void f(vector<vector<int>>&ans,vector<int>&v,int frq[],vector<int>n) {
//             if(v.size() == n.size()) {
//                 ans.push_back(v);
//                 return;
//             }
//             for(int i = 0; i < n.size() ; i++) {
//                 if(!frq[i]){
//                     v.push_back(n[i]);
//                     frq[i] = 1;
//                     f(ans,v,frq,n);
//                     v.pop_back();
//                     frq[i] = 0 ;
//                 }
//             }
//         }
//         vector<vector<int>> permute(vector<int>& n) {
//             vector<int>a;
//             vector<vector<int>>ans;
//             int si = n.size();
//             int frq[si];
//             for(int i = 0 ; i < si ; i++) {
//                 frq[i] = 0;
//             }
//             f(ans,a,frq,n);
    
//             return ans;
//         }
//     };

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n, m;
	    cin >> n >> m;
	    set<int>ans;
	    if(n > m){
	        cout << -1 << "\n";
	        continue;
	    }
	    ans.insert(n);
	    for(int i = 0; i < 63; ++i)
	    {
	        int mask = (1ll << i);
            cout<<mask<<" ";
	        if(((mask|n) <= m))
	        ans.insert(mask|n);
	    }
        cout<<'\n';
	    if(ans.size() == 1)
	    {
	        cout << -1 << "\n";
	        continue;
	    }
	    cout << ans.size() << "\n";
	    for(auto &i : ans)
	        cout << i << " ";
	    cout << "\n";
	    
	}

}