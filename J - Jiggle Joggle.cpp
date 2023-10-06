/* ------------------------------------ */
/* Name: Kichirou                       */
/* Education: HUSC                      */
/* Email: mrphuc244@gmail.com           */
/* ------------------------------------ */

#include <bits/stdc++.h>

using namespace std;

const int mx = int(2 * 1e5 + 1);

int main()
{
    int n;

    cin >> n;

    long long a[n + 1];

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int d[n + 1];

    long long ch, x;

    int j = 0;

    memset(d, 1, sizeof(d));

    for (int i = 1; i < n; i++)
    {
        if (a[i + 1] != a[i])
        {
            ch = a[i + 1];
            x = a[i + 1] - a[i];
            j = i + 1;
            d[j] = 2;
            break;
        }
    }
    if (j)
    {
        for (int i = j + 1; i <= n; i++)
        {
            if ((a[i] - ch) * x < 0)
            {
                d[i] = d[i - 1] + 1;
                x = a[i] - ch;
                ch = a[i];
            }
            else
            {
                ch = a[i];
                d[i] = d[i - 1];
            }
        }
        cout << d[n];
    }
    else
        cout << 1;
    return 0;
}