#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,cnt = 0;
    cin>>n;
    vector<bool>p(n + 3,true);
    for (int i = 2 ;i * i <= n; i++)
    {
        if(p[i]){
            for (int j = i + i; j <= n; j+= i)
            {
                p[j] = false;
            }
        }
    }
    set<int>s;
    for (int i = 2; i <= n; i++)
    {
        if(p[i]) s.insert(i);
    }
    vector<int>v[n + 3];
    int cnto[n + 3];
    for (int i = 1; i <=  n; i++)
    {
        for (int j = i; j <= n; j+=i)
        {
            auto it = s.find(i);
            if(it != s.end()){
                cnto[j]++;
            } 
            v[j].push_back(i);
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if(cnto[i] == 2) cnt++;
    }
    cout<<cnt<<nl;
    return 0;
}