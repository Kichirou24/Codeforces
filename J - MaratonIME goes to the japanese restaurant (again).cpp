/* ------------------------------------ */
/* Name: Kichirou                       */
/* Education: HUSC                      */
/* Email: mrphuc244@gmail.com           */
/* ------------------------------------ */

#include <iostream>

using namespace std;

const long long int mx = 1e6;

long long x[mx + 5], y[mx + 5], r[mx + 5];

int main()
{
    int i, j, a, b, c, n;
    while (cin >> n)
    {
        for (i = 1; i <= n; i++)
        {
            cin >> x[i];
            cin >> y[i];
            cin >> r[i];
        }

        for (i = 1; i <= n; i++)
        {
            for (j = i + 1; j <= n; j++)
            {
                a = x[i] - x[j];
                b = y[i] - y[j];
                c = r[i] + r[j];
                if (a*a + b*b == c*c) cout << i << " " << j << endl;
            }
        }
    }
    return 0;
}