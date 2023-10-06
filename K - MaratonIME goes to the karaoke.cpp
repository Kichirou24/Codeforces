/* ------------------------------------ */
/* Name: Kichirou                       */
/* Education: HUSC                      */
/* Email: mrphuc244@gmail.com           */
/* ------------------------------------ */

#include <bits/stdc++.h>

using namespace std;

int tmp;

bool used[256];

int main()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (!used[s[i]])
        {
            int cnt = 1;
            int st = i + 1;
            while (s[st - 1] == s[st])
            {
                used[s[st]] = true;
                cnt++;
                st = st + 1;
            }
            used[s[st]] = false;
            cout << s[i] << cnt;
        }
    }
}