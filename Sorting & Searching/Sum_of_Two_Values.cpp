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
    
    int n,x;
    cin>>n>>x;

    vector<pair<ll,ll>> v(n);

    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        v[i].ff=t;
        v[i].ss=i;
    }

    sort(v.begin(),v.end());

    int i=0,j=n-1;

    while(i<j)
    {
        ll sum=v[i].ff+v[j].ff;
        if(sum==x)
        {
            cout<<v[i].ss+1<<" "<<v[j].ss+1<<endl;
            break;
        }
        else if(sum>x)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    if(i==j)
        cout<<"IMPOSSIBLE"<<endl;

    return 0;
}