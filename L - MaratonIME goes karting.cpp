/* ------------------------------------ */
/* Name: Kichirou                       */
/* Education: HUSC                      */
/* Email: mrphuc244@gmail.com           */
/* ------------------------------------ */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d = 0, vt = 0;

    cin >> n;

    long long maxx = -1;
    
    for (int i = 1; i <= n; i++)
    {
        long long x;
        cin >> x;
        if (x == maxx)
        {
            d++;
        }
        else if (x > maxx)
        {
            d = 1;
            maxx = x;
            vt = i;
        }
    }
    if (d == 1)
        cout << vt;
    else
        cout << -1;
    return 0;
}
