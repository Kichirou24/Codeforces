/* ------------------------------------ */
/* Name: Kichirou                       */
/* Education: HUSC                      */
/* Email: mrphuc244@gmail.com           */
/* ------------------------------------ */

#include <iostream>

using namespace std;

int main() {
    int t, c = 0;
    cin >> t;

    int B[t];

    while (t--) {
        char A[10][10];

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> A[i][j];
            }
        }

        int points = 0;

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (A[i][j] == 'X') {

                    int ring = min(min(i, 9 - i), min(j, 9 - j));

                    if (ring == 0) {
                        points += 1;
                    } else if (ring == 1) {
                        points += 2;
                    } else if (ring == 2) {
                        points += 3;
                    } else if (ring == 3) {
                        points += 4;
                    } else if (ring == 4) {
                        points += 5;
                    }
                }
            }
        }

        B[c] = points;
        c++;
    }

    for (int i = 0; i < c; i++) {
        cout << B[i] << endl;
    }

    return 0;
}