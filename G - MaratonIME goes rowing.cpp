/* ------------------------------------ */
/* Name: Kichirou                       */
/* Education: HUSC                      */
/* Email: mrphuc244@gmail.com           */
/* ------------------------------------ */

#include <iostream>
#include <set>

using namespace std;

int main()
{
    int i, n;
    string str;
    bool flag;

    while (cin >> str)
    {
        set<int> a, b;
        set<int>::iterator it;
        for (i = 0; i < str.size(); i++)
        {
            if (str[i] == 'A') a.insert(i+1);
            else b.insert(i+1);
        }
        flag = (a.size()) == (b.size());
        for (it = a.begin(); it != a.end(); it++)
        {
            n =* (b.lower_bound((*it)));
            if (n > (*it)) b.erase(n);
        }
        if (b.empty() && flag) cout << "Sim" << endl;
        else cout << "Nao" << endl;
        cout << endl;
    }
    return 0;
}