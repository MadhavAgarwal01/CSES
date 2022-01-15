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

    for(ll i=1;i<=n;i++)
    {
        ll total_ways=(i*i*(i*i-1))/2;

        ll attack_ways=4*(i-1)*(i-2);

        ll safe_ways = total_ways-attack_ways;

        cout<<safe_ways<<endl;
    }
    
    return 0;
}