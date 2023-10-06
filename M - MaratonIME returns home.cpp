/* ------------------------------------ */
/* Name: Kichirou                       */
/* Education: HUSC                      */
/* Email: mrphuc244@gmail.com           */
/* ------------------------------------ */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, ans = 0, mx = 0;

    cin >> n >> m;
    
    int a[n + 1][m + 1];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            char x;
            cin >> x;
            if (x == '_')
                a[i][j] = 0;
            else if (x == '.')
                a[i][j] = 1;
            else
                a[i][j] = 2;
        }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int v;
            if (i % 2 == 0)
                v = m - j + 1;
            else
                v = j;
            if (a[i][v] == 2)
            {
                ans = max(mx, ans);
                mx = 0;
            }
            else
                mx += a[i][v];
        }
    }
    cout << ans;
    return 0;
}