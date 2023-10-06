/* ------------------------------------ */
/* Name: Kichirou                       */
/* Education: HUSC                      */
/* Email: mrphuc244@gmail.com           */
/* ------------------------------------ */

#include <iostream>
#include <cmath>

using namespace std; 

const long long int mx = 1e6;

double a[mx + 5], b[mx + 5], c[mx + 5];

int main(){
    int n, i;
    double floor_foot, floor_chain;

    while (cin >> n)
    {
        for (i = 0; i < n; i++) cin >> a[i];
        for (i = 0; i < n; i++) cin >> b[i];
        for (i = 0; i < n; i++) cin >> c[i];

        floor_foot = floor_chain = 0;

        for (i = 0; i < n; i++)
        {
            floor_foot += abs(a[i] - b[i]) * abs(a[i] - b[i]);
        }
        floor_foot = sqrt(floor_foot);

        for (i = 0; i < n; i++)
        {
            floor_chain += abs(a[i] - c[i]) * abs(a[i] - c[i]);
        }
        floor_chain = sqrt(floor_chain);

        if (floor_foot > floor_chain) cout << "MaratonIME" << endl;
        else cout << "Yan" << endl;

    }
    return 0;
}