/* ------------------------------------ */
/* Name: Kichirou                       */
/* Education: HUSC                      */
/* Email: mrphuc244@gmail.com           */
/* ------------------------------------ */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t, c = 0;
    cin >> t;

    string S[t];

    while (t--)
    {
        string s;
        cin >> s;
        bool possible = false;

        if (s == "abc")
        {
            possible = true;
        }
        else
        {

            for (int i = 0; i < 3; i++)
            {
                swap(s[i], s[(i + 1) % 3]);
                if (s == "abc")
                {
                    possible = true;
                    break;
                }
                swap(s[i], s[(i + 1) % 3]);
            }
        }

        if (possible)
        {
            S[c] = "YES";
            c++;
        }
        else
        {
            S[c] = "NO";
            c++;
        }
    }

    for (int i = 0; i < c; i++)
    {
        cout << S[i] << endl;
    }

    return 0;
}
