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

    int A[t];

    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        A[i] = a * b;
    }

    for (int i = 0; i < t; i++)
    {
        cout << A[i] << endl;
    }

    return 0;
}