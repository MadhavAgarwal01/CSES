#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define ff first
#define ss second
#define modnum 1000000007

int binarysearch()
{

}

int main()
{ 
    ios_base::sync_with_stdio(false);
    
    int n,m;
    cin>>n>>m;

    vector<int> prices(n);  
    vector<int> limit(m),ans(m);

    for(int i=0;i<n;i++)
        cin>>prices[i];

    for(int i=0;i<m;i++)
        cin>>limit[i];
    
    sort(prices.begin(),prices.end());

    for(int i=0;i<m;i++)
    {
        vector<int>::iterator lower;
        lower=lower_bound(prices.begin(),prices.end(),limit[i]);
        if(*lower!=limit[i])
            lower--;

        if(lower>=prices.begin())
            ans[i]=*lower;
        else
            ans[i]=-1;
        if(lower>=prices.begin())
            *lower=-1;
    }
        
    for(auto x:ans)
        cout<<x<<endl;

    return 0;
}