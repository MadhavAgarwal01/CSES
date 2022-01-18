#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define ff first
#define ss second
#define modnum 1000000007

void toh(int n, int a,int b,int c)
{
    if(n)
    {
        toh(n-1,a,c,b);
        cout<<a<<" "<<c<<endl;
        toh(n-1,b,a,c);
    }
}

int main()
{ 
    ios_base::sync_with_stdio(false);
    
    int n;
    cin>>n;

    cout<<pow(2,n)-1<<endl;
    toh(n,1,2,3);
    
    return 0;
}