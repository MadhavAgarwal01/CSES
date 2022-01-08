#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define ff first
#define ss second

int main()
{ 
    ios_base::sync_with_stdio(false);

    int n;
    cin>>n;

    if(n==3 || n==2)
    {
        cout<<"NO SOLUTION"<<endl;
    }
    else
    {
        for (int i = 2; i <= n; i+=2)
            cout <<i<< " ";

        for (int i = 1; i <= n; i+=2)
            cout <<i<< " ";

    }
    return 0;
}