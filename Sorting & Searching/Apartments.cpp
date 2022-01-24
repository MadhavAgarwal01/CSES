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
    
    int n,m,k;
    cin>>n>>m>>k;

    vector<int> d(n),s(m);
    for(int i=0;i<n;i++)
        cin>>d[i];

    for(int i=0;i<m;i++)
        cin>>s[i];

    sort(d.begin(),d.end());
    sort(s.begin(),s.end());

    // cout<<"desired"<<endl;
    // for(auto x:d)
    //     cout<<x<<" ";
    // cout<<endl;

    // cout<<"size"<<endl;
    // for(auto x:s)
    //     cout<<x<<" ";
    // cout<<endl;

    // TESTCASE
    // 4 3 5
    // 60 45 80 60
    // 30 60 75

    // 45 60 60 80
    // 30 60 75

    int i=0,j=0,c=0;
    while(i<n && j<m)
    {
        int lower=d[i]-k;
        int upper=d[i]+k;
        // cout<<"d[i]="<<d[i]<<endl;
        // cout<<"lower="<<lower<<" upper="<<upper<<endl;
        while(j<m)
        {
            if(s[j]>upper)
            {
                i++;
                break;
            }
            if(s[j]>=lower && s[j]<=upper)
            {
                // cout<<"s[j]="<<s[j]<<endl;
                i++;
                j++;
                c++;
                // cout<<"count="<<c<<endl;
                break;
            }
            j++;
        }
    }
    
    cout<<c<<endl;

    return 0;
}