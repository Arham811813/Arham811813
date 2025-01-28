// #include <bits/stdc++.h>
// #define nl '\n'
// #define nel cout<<nl
// #define ll long long
// using namespace std;
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     while (t--) {
//         int n , cnt = 0;
//         cin>>n;
//         for (int i = 1; i * i  <=  n; i++)
//         {
//             if(n % i == 0) {
//                 if(n / i == i)cnt++;
//                 else cnt+=2;
//             }
//         }
//         cout<<cnt<<nl;
//     }
//     return 0;
// }


#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
#define ll long long
using namespace std;
const int maxel = 1e6 + 6;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>d(maxel);
    for (int i = 1; i < maxel; i++)
    {
        for (int j = i; j < maxel; j+=i)
        {
            d[j]++;
        }
        
    }
    
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        cout<<d[n]<<nl;
    }
    return 0;
}