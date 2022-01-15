#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define ff first
#define ss second

int main()
{ 
    ios_base::sync_with_stdio(false);
    
    ll n;
    cin>>n;

    ll s=n*(n+1)/2;

    if(s & 1) // odd
    {
        cout<<"NO"<<endl;
    }
    else //even
    {
        ll temp=s/2;

        vector<ll> v1,v2;
        cout<<"YES"<<endl;

        while(n)
        {
            if(temp-n>=0)
            {
                v1.push_back(n);
                temp=temp-n;
            }
            else
            {
                v2.push_back(n);
            }
            n--;
        }
        cout<<v1.size()<<endl;

        for(auto x:v1)
            cout<<x<<" ";

        cout<<endl;
        cout<<v2.size()<<endl;

        for(auto x:v2)
            cout<<x<<" ";

        cout<<endl;
    }

    return 0;
}