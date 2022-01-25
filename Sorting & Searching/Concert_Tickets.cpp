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
    vector<int> limit(m),ans;

    for(int i=0;i<n;i++)
        cin>>prices[i];

    for(int i=0;i<m;i++)
        cin>>limit[i];
    
    sort(prices.begin(),prices.end(),greater<int>());

    for(int i=0;i<m;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(prices[j]!=(-1) && prices[j]<=limit[i])
            {
                count=1;
                ans.push_back(prices[j]);
                prices[j]=-1;
                break;
            }
        }
        if(count==0)
            ans.push_back(-1);
    }
        
    for(auto x:ans)
        cout<<x<<endl;

    return 0;
}