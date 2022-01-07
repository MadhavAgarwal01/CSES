#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define ff first
#define ss second

int main()
{ 
    ll n;
    cin>>n;
    cout<<n<<" ";

    while(n!=1)
    {
        if(n & 1)
        {
            n*=3;
            n++;
        }
        else
        {
            n=n/2;
        }
        cout<<n<<" ";
    }
    
    return 0;
}