/* ------------------------------------ */
/* Name: Kichirou                       */
/* Education: HUSC                      */
/* Email: mrphuc244@gmail.com           */
/* ------------------------------------ */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t, c = 0;
    cin >> t;

    int B[t];

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> digits(n);

        for (int i = 0; i < n; i++)
        {
            cin >> digits[i];
        }

        long long max_product = 1;

        int min_digit = *min_element(digits.begin(), digits.end());

        for (int i = 0; i < n; i++)
        {
            if (digits[i] == min_digit)
            {
                digits[i]++;
                break;
            }
        }

        for (int i = 0; i < n; i++)
        {
            max_product *= digits[i];
        }

        B[c] = max_product;
        c++;
    }

    for (int i = 0; i < c; i++)
    {
        cout << B[i] << endl;
    }

    return 0;
}
