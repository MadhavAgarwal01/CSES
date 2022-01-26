#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define ff first
#define ss second
#define modnum 1000000007
// multiset
int main()
{ 
    ios_base::sync_with_stdio(false);
    
    int n,m;
    cin>>n>>m;
 
    multiset<int> prices;  
 
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        prices.insert(x);
    }
 
    for(int i=0;i<m;i++)
    {
        int limit;
        cin>>limit;
 
        multiset<int>::iterator  lower;
        lower=prices.lower_bound(limit+1);
       
        if(lower==prices.begin())
        {
            cout<<-1<<endl;
        }
        else
        {
            lower--;
            cout<<*lower<<endl;
            prices.erase(lower);
        }
    }
 
    return 0;
}