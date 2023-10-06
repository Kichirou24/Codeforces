/* ------------------------------------ */
/* Name: Kichirou                       */
/* Education: HUSC                      */
/* Email: mrphuc244@gmail.com           */
/* ------------------------------------ */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;

    cin >> n >> q;

    map<long long, int> mp;
    map<long long, vector<long long>> m1;

    for (int i = 1; i <= n; i++)
    {
        long long x1;
        cin >> x1;
        mp[x1]++;
        m1[x1].push_back(i);
    }

    long long kq[q];

    for (int i = 0; i < q; i++)
    {
        long long x, y;
        cin >> x >> y;
        if (mp[x] < y)
        {
            kq[i] = -1;
        }
        else
        {
            kq[i] = (m1[x])[y - 1];
        }
    }

    for (int i = 0; i < q; i++)
        cout << kq[i] << endl;

    return 0;
}