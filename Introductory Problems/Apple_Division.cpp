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
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    ll a = 0, b = 0, dif = INT64_MAX;

    for (int i = 0; i < (1 << n); i++)
    {
        a = 0;
        b = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
                a = a + v[j];
            else
                b = b + v[j];
        }

        dif = min(dif, abs(a - b));
    }

    cout << dif << endl;

    return 0;
}