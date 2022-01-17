#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define ff first
#define ss second
#define modnum 1000000007

vector<string> gray(int n)
{
    vector<string> res;

    if(n==1)
    {
        res.push_back("0");
        res.push_back("1");
        return res;
    }

    vector<string> pres=gray(n-1);
    int s=pres.size();
    
    for(int i=0;i<s;i++)
        res.push_back("0"+pres[i]);

    for(int i=s-1;i>=0;i--)
        res.push_back("1"+pres[i]);

    return res;
}

int main()
{ 
    ios_base::sync_with_stdio(false);
    
    int n;
    cin>>n;

    vector<string> ans=gray(n);

    for(auto x:ans)
        cout<<x<<endl;

    return 0;
}