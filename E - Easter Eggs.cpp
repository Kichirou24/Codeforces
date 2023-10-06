/* ------------------------------------ */
/* Name: Kichirou                       */
/* Education: HUSC                      */
/* Email: mrphuc244@gmail.com           */
/* ------------------------------------ */

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    string D[t];

    for (int i = 0; i < t; i++)
    {
        int A, B, C;
        cin >> A >> B >> C;

        if (A > B)
        {
            D[i] = "Eason";
        }
        else if (B > A)
        {
            D[i] = "Emil";
        }
        else
        {
            if (C == 0)
            {
                D[i] = "Emil";
            }
            else
            {
                D[i] = "Eason";
            }
        }
    }

    for (int i = 0; i < t; i++)
    {
        cout << D[i] << endl;
    }

    return 0;
}