/* ------------------------------------ */
/* Name: Kichirou                       */
/* Education: HUSC                      */
/* Email: mrphuc244@gmail.com           */
/* ------------------------------------ */

#include <iostream>

using namespace std;

const long long mx = 1e5;

long long A[mx + 5], sum[mx + 5];

int main()
{
    long long n, m, l, r, i;

    while (cin >> n >> m)
    {
        for (i = 1; i <= n; i++)
        {
            cin >> A[i];
        }
        sum[0] = 0;
        for (i = 1; i <= n; i++)
        {
            sum[i] = sum[i - 1] + A[i];
        }
        while (m--)
        {
            cin >> l;
            cin >> r;
            cout << (((sum[r]-sum[l-1]) % 2 == 0) ? "Sim" : "Nao") << endl;
        }
    }
    return 0;
}