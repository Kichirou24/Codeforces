/* ------------------------------------ */
/* Name: Kichirou                       */
/* Education: HUSC                      */
/* Email: mrphuc244@gmail.com           */
/* ------------------------------------ */

#include <bits/stdc++.h>

using namespace std;

const long long mx = 1000000005;
const int maxn = 100005;

int n, x, ans = mx;

long long a[maxn], sum[maxn];

int main()
{
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum[i] += sum[i - 1] + a[i];
    }

    if (sum[n] < x)
        return cout << -1, 0;

    int l = 0, t = maxn;

    for (int r = 1; r <= n; r++)
    {
        if (sum[r] - sum[l] >= x)
        {
            while (l < r)
            {
                if (sum[r] - sum[l + 1] >= x)
                {
                    l++;
                }
                else
                    break;
            }
            if (r == l + 1) return cout << 1,0;
            t = r - l;
            ans = min(ans, t);
        }
    }

    cout << ans << endl;

    return 0;
}