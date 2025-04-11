// class Solution {
// public:
//     void fun(int i ,vector<vector<int>>&v,vector<int>&a,vector<int>n) {
//         if(i == n.size()) {
//             v.push_back(a);
//             return;
//         }
//         a.push_back(n[i]);
//         fun(i+1,v,a,n);
//         a.pop_back();
//         while(i + 1 < n.size() && n[i] == n[i + 1]) {
//             i++;
//         }
//         fun(i+1,v,a,n);
//     }
//     vector<vector<int>> subsetsWithDup(vector<int>& n) {
//         vector<vector<int>>v;
//         vector<int>ans;
//         sort(n.begin(),n.end());
//         fun(0,v,ans,n);
//         return v;
//     }
// };