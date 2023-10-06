/* ------------------------------------ */
/* Name: Kichirou                       */
/* Education: HUSC                      */
/* Email: mrphuc244@gmail.com           */
/* ------------------------------------ */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, m, k, a, b;

    while (cin >> n >> m >> k)
    {
        a = ceil(n*0.7);
        a = max(0, a - k);
        if (a > n - m)
        {
            a= -1;
        }
        b = ((k + n - m) * 100) / n;
        cout << a << endl;
        cout << b << endl;
    }
    return 0;
}