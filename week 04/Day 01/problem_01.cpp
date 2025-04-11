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