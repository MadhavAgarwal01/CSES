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

    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];

    // 4 10
    // 7 2 3 9  

    // 2 3 7 9

    // 9+2=11
    // 9+3=12

    sort(v.begin(),v.end());
    int i=0,j=n-1;
    int c=0;

    while(i<=j)
    {
        if(i==j)
        {
            if(v[i]<=x)
                c++;
            break;
        }
        if(v[i]+v[j]>x)
        {
            if(v[j]<=x)
                c++;
            j--;
        }
        else
        {
            i++;
            j--;
            c++;
        }
    }
    cout<<c<<endl;
    
    return 0;
}