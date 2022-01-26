#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define ff first
#define ss second
#define modnum 1000000007

int main()
{ 
    ios_base::sync_with_stdio(false);
    
    int n;
    cin>>n;

    vector<ll> v(n);

    for(int i=0;i<n;i++)
        cin>>v[i];

    ll sum=0,maxsum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        sum=max(v[i],sum+v[i]);
        maxsum=max(maxsum,sum);
    }

    cout<<maxsum<<endl;
    
    return 0;
}