#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
const int MOD = 1e9 + 7;
const long long INF = 2e9;
using ui = unsigned int;
using ll = long long;
using ull = unsigned long long;
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define time__(d) for(long blockTime = 0; (blockTime == 0 ? (blockTime=clock()) != 0 : false); debug("%s time : %.4fs", d, (double)(clock() - blockTime) / CLOCKS_PER_SEC))

void solve()
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
}

int main()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    // cin>>t;
    while(t--)
    {
        solve();

//       time__("solve"){
//            solve();
//        }
    }

    return 0;
}