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

    vector<pair<int,int>> p;

    for(int i=0;i<(n);i++)
    {
        int a,b;
        cin>>a>>b;
        p.push_back({a,1});
        p.push_back({b,-1});
    }

    sort(p.begin(),p.end());

    int m=0,c=0;
    for(int i=0;i<(n+n);i++)
    {
        c=c+p[i].ss;
        m=max(m,c);
    }
    
    cout<<m<<endl;
    
    return 0;
}