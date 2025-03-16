// class Solution {
//     public:
//         bool is_pal(string s,int l,int r) {
//             while (l <= r) {
//                 if(s[l++] != s[r--]) return 0;
//             }
//             return 1;
//         }
//         void f(int inx , string s,vector<string>& v,vector<vector<string>>&vv,int n) {
//             if(inx == n) {
//                 vv.push_back(v);
//                 return;
//             }
    
//             for(size_t i = inx ; i < n; i++ ) {
//                 if(is_pal(s,inx,i)) {
//                     v.push_back(s.substr(inx,i - inx + 1));
//                     f(i+1,s,v,vv,n);
//                     v.pop_back();
//                 }
//             }
//         }
//         vector<vector<string>> partition(string s) {
//             vector<string>v;
//             vector<vector<string>>vv;
//             int n = s.size();
//             f(0,s,v,vv,n);
//             return vv;
//         }
//     };