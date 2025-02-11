#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    cout<<n/2<<nl;
    if(n % 2 == 0) {
        for (int i = 0; i < n/2; i++)
        {
            cout<<2<<" ";
        }
        nel;
    }else{
        for (int i = 0; i < (n/2) - 1; i++)
        {
            cout<<2<<" ";
        }
        cout<<3<<nl;
    }
    return 0;
}