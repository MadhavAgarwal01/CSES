#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define ff first
#define ss second

int main()
{ 
    ll n,q;
    cin>>n>>q;

    vector<ll> v(n+1);
    v.push_back(0);

    for(ll i=1;i<n+1;i++)
    {
        ll x;
        cin>>x;
        v[i]=x+v[i-1];
        // cout<<"v[i] = "<<v[i]<<endl;
    }

    vector<ll> ans;
    for(ll i=0;i<q;i++)
    {
        ll a,b;
        cin>>a>>b;
        ans.push_back(v[b]-v[a-1]);
        // cout<<"ANS = "<<(v[b]-v[a])<<endl;
    }

    for(auto x:ans)
        cout<<x<<endl;
    
    return 0;
}