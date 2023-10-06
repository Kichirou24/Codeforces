/* ------------------------------------ */
/* Name: Kichirou                       */
/* Education: HUSC                      */
/* Email: mrphuc244@gmail.com           */
/* ------------------------------------ */

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        map<int, int> b;
        int maxb = 0;
        int j = 0;
        bool result = false;
        
        for (int i = 0; i < n; i++) {
            b[a[i]]++;
            maxb = max(maxb, b[a[i]]);
            
            while (i - j + 1 > maxb) {
                b[a[j]]--;
                if (b[a[j]] == 0) {
                    b.erase(a[j]);
                }
                j++;
            }
            
            if (i - j + 1 >= maxb && b[k] > 0) {
                result = true;
                break;
            }
        }
        
        if (result) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
