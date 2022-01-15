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
    
    ll n;
    cin>>n;

    ll count = 0;

    for (ll i = 5; n / i >= 1; i *= 5)
        count += n / i;

    cout<<count<<endl;
    
    return 0;
}