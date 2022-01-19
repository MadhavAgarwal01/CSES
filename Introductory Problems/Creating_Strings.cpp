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
    
    string s;
    cin>>s;

    vector<string> v;

    sort(s.begin(),s.end());
    v.push_back(s);

    int count =1;

    while(next_permutation(s.begin(),s.end()))
    {
        count++;
        v.push_back(s);
    }

    cout<<count<<endl;
    for(auto x:v)
        cout<<x<<endl;
    
    return 0;
}