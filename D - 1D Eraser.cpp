/* ------------------------------------ */
/* Name: Kichirou                       */
/* Education: HUSC                      */
/* Email: mrphuc244@gmail.com           */
/* ------------------------------------ */

#include <iostream>

using namespace std;

int main()
{
    int t, c = 0;
    cin >> t;

    int A[t];

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int operations = 0;

        for (int i = 0; i < n;)
        {
            if (s[i] == 'B')
            {
                operations++;
                i += k;
            }
            else
            {
                i++;
            }
        }

        A[c] = operations;
        c++;
    }

    for (int i = 0; i < c; i++)
    {
        cout << A[i] << endl;
    }

    return 0;
}
