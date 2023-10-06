/* ------------------------------------ */
/* Name: Kichirou                       */
/* Education: HUSC                      */
/* Email: mrphuc244@gmail.com           */
/* ------------------------------------ */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    string A[t];

    for (int i = 0; i < t; i++) {
        long long n, k, x;
        cin >> n >> k >> x;

        long long minSum = k * (k + 1) / 2; 

        if (x >= minSum && x <= n * k - (k * (k - 1)) / 2) {
            A[i] = "YES";
        } else {
            A[i] = "NO";
        }
    }

    for (int i = 0; i < t; i++) {
        cout << A[i] << endl;
    }

    return 0;
}
