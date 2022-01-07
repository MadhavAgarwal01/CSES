#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define ff first
#define ss second

int main()
{ 
    ll n;
    cin>>n;

    vector<ll> v;

    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }

    // for(auto x:v)
    //     cout<<x<<" ";
    // cout<<endl;


    ll s=0,m=v[0];

    for(int i=1;i<n;i++)
    {
        s = s + max(0ll,m-v[i]);
        m = max(m,v[i]);
    }
    cout<<s<<endl;
    
    return 0;
}