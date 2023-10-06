/* ------------------------------------ */
/* Name: Kichirou                       */
/* Education: HUSC                      */
/* Email: mrphuc244@gmail.com           */
/* ------------------------------------ */

#include <iostream>
#include <vector>

using namespace std;

const long long mx = 1e5;

int A[mx + 5];

int main()
{
    int n, i, ans, high, low, mid;
    while (cin >> n)
    {
        for (i = 1; i <= n; i++)
        {
            cin >> A[i];
        }
        ans = 0;
        low = 1;
        high = n;
        while (low <= high)
        {
            mid = (low + high) / 2;
            if (A[mid] < A[n]) low = mid + 1;
            else high = mid - 1;
            ans++;
        }
        cout << ans << endl;
    }

    return 0;
}