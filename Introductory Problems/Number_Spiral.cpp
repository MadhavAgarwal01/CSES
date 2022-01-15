#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define ff first
#define ss second
ll solve()
{
    ll x,y;
    cin>>x>>y;

    if(x>y) // below diagonal
    {
        ll d=(x*x)-(x-1);

        if(x & 1)// x is odd -> increasing sequence
        {
            d=d-(x-1);
            return d+(y-1);
        }
        else// x is even -> decreasing sequence
        {
            d=d+(x-1);
            return d-(y-1);
        }
    }
    else if(y>x) // above diagonal
    {
        ll d=(y*y)-(y-1);

        if(y & 1)// y is odd -> decreasing sequence
        {
            d=d+(y-1);
            return d-(x-1);
        }
        else// y is even -> increasing sequence
        {
            d=d-(y-1);
            return d+(x-1);
        }
    }
    else // x==y -> on diagonal
    {
        ll d=(x*x)-(x-1);
        return d;
    }
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