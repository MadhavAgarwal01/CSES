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

    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];


    sort(v.begin(),v.end());
    // for(auto x:v)
    //     cout<<x<<" ";
    // cout<<endl;

    int count=1;
    for(int i=0;i<n-1;i++)
    {
        if(v[i]!=v[i+1])
            count++;
        // cout<<v[i]<<" "<<v[i+1]<<" "<<count<<endl;
    }

    cout<<count<<endl;
    
    return 0;
}