/* ------------------------------------ */
/* Name: Kichirou                       */
/* Education: HUSC                      */
/* Email: mrphuc244@gmail.com           */
/* ------------------------------------ */

#include <iostream>

using namespace std;

const long long int mx = 1e6;

int A[mx + 5];

int main()
{
    int i, j, n, t, yan, narthan, t1, t2;
    while (cin >> n >> t)
    {
        for (i = 1; i <= n; i++)
            cin >> A[i];
        yan = narthan = 0;
        t1 = t2 = 0;

        for (i = 1; i <= n; i++)
        {
            t1 += A[i];
            if (t1 <= t)
                yan++;
        }

        for (j = n; j >= 1; j--)
        {
            t2 += A[j];
            if (t2 <= t)
                narthan++;
        }

        if (yan > narthan)
            cout << "Yan" << endl;
        if (yan < narthan)
            cout << "Nathan" << endl;
        if (yan == narthan)
            cout << "Empate" << endl;
    }
    return 0;
}