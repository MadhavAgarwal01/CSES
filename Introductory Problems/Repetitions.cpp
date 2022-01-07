#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define ff first
#define ss second

int main()
{ 
    string s;
    cin>>s;

    int a=0,c=0,g=0,t=0;
    int n=s.size();
    // cout<<"n="<<n<<endl;
    for(int i=0;i<n;i++)
    {
        // cout<<"i="<<i<<endl;
       if(s[i]=='A')
       {
           int r=0;
           int j=i;
           while(j<n && s[j]=='A')
            {
                // cout<<"A="<<r+1<<endl;
                r++;
                j++;
            }
        
            i=j-1;
            a=max(a,r);
       }
       else if(s[i]=='C')
       {
           int r=0;
           int j=i;
           while(j<n && s[j]=='C')
            {
                // cout<<"C="<<r+1<<endl;
                r++;
                j++;
            }

            i=j-1;
            c=max(c,r);
       }
       else if(s[i]=='G')
       {
           int r=0;
           int j=i;
           while(j<n && s[j]=='G')
            {
                // cout<<"G="<<r+1<<endl;
                r++;
                j++;
            }

            i=j-1;
            g=max(g,r);
       }
       else
       {
           int r=0;
           int j=i;
           while(j<=n && s[j]=='T')
            {
                // cout<<"T="<<r+1<<endl;
                r++;
                j++;
            }

            i=j-1;
            t=max(t,r);
       }
    }
    cout<<max(max(a,c),max(g,t));

    return 0;
}