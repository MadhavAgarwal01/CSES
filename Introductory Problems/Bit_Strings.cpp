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
    
    ull n;
    cin>>n;

    ull t=1;
    while(n)
    {
        t=(t*2)%modnum;
        n--;
    }
    cout<<t%modnum<<endl;
    
    return 0;
}