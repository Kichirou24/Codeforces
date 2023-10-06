/* ------------------------------------ */
/* Name: Kichirou                       */
/* Education: HUSC                      */
/* Email: mrphuc244@gmail.com           */
/* ------------------------------------ */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, a;

    cin >> n >> x >> a;

    int s = floor(n / (floor(a / x)));

    if (s * floor(a / x) == x)
        cout << s;
    else
        cout << s + 1;

    return 0;
}