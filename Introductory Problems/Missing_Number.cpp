#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define ff first
#define ss second
vector<ll> v((2e+5)+1,0);

int main()
{ 
    ll n;
    cin>>n;

    for(int i=1;i<n;i++)
    {
        ll x;
        cin>>x;
        v[x]=1;
    }
    for(int i=1;i<v.size();i++)
    {
        if(v[i]!=1)
        {
            cout<<i;
            break;
        }
    }
    
    return 0;
}