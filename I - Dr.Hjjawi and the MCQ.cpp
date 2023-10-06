/* ------------------------------------ */
/* Name: Kichirou                       */
/* Education: HUSC                      */
/* Email: mrphuc244@gmail.com           */
/* ------------------------------------ */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<char, int> mp;
    int n;
    cin >> n;
    cin.ignore();
    string s;
    getline(cin, s);
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    int max = 0;
    int min;
    for (auto x : mp)
    {
        min = x.second;
        break;
    }
    if (mp.size() <= 4)
        min = 0;
    else
    {
        for (auto x : mp)
        {
            if (x.second < min)
                min = x.second;
        }
    }
    for (auto x : mp)
    {
        if (x.second > max)
            max = x.second;
    }
    cout << min << " " << max;
}