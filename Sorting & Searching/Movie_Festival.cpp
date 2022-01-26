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

    vector<pair<int,int>> p(n);
    for(int i=0;i<n;i++)
        cin>>p[i].ss>>p[i].ff;


    sort(p.begin(),p.end());

    int c=1;
    int t=p[0].ff;
    
    for(int i=0;i<n-1;i++)
    {
        if(t<=p[i+1].ss)
        {
            t=p[i+1].ff;
            c++;
        }

    }
    cout<<c<<endl;
    
    return 0;
}