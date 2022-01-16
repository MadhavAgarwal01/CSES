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
    cin >> s;

    unordered_map<char, int> map;

    for (auto x : s)
        map[x]++;

    char ch = 'a';
    int c = 0;
    for (auto i : map)
    {
        if (i.second & 1)
        {
            c++;
            ch = i.first;
        }
    }

    string str,r;
    if (c > 1)
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        for (auto i : map)
        {
            if (i.first == ch)
                continue;
            int x = i.second / 2;
            while (x)
            {
                // push_back() is way faster than normal concatenation
                str.push_back(i.first);
                x--;
            }
        }
        r=str;
        reverse(r.begin(),r.end());

        string odd;
        while (map[ch])
        {
            odd.push_back(ch);
            map[ch]--;
        }

        cout << str << odd << r << endl;
    }

    return 0;
}