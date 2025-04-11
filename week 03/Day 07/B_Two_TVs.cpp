#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin>>q;
    map<int,int>mp;
    while (q--)
    {
        int l,r;
        cin>>l>>r;
        mp[l]++;
        mp[r+1] --;
    }
    long long sum = 0;
    bool f = true;
    for(auto it : mp){
        sum+=it.second;
        if(sum > 2){
            f = false;
            break;
        } 
    }
    cout<<(f?"YES\n":"NO\n");
    return 0;
}