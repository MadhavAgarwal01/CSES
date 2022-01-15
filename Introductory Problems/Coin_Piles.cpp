#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define ff first
#define ss second
#define modnum 1000000007
string solve()
{
    ll a,b;
    cin>>a>>b;

    if(max(a,b)>2*min(a,b))
        return "NO";
    else if((a+b)%3==0)
        return "YES";
    else
        return "NO";
}

int main()
{ 
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        cout<<solve()<<endl;
    }

    return 0;
}