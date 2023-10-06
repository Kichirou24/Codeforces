/* ------------------------------------ */
/* Name: Kichirou                       */
/* Education: HUSC                      */
/* Email: mrphuc244@gmail.com           */
/* ------------------------------------ */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(long long a, long long b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b;
        cin >> a >> b;

        long long check = gcd(a, b);

        if (check == 1)
        {
            cout << "Nao" << endl;
        }
        else
        {
            cout << "Sim" << endl;
        }
    }

    return 0;
}
