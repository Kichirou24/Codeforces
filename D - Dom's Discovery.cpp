/* ------------------------------------ */
/* Name: Kichirou                       */
/* Education: HUSC                      */
/* Email: mrphuc244@gmail.com           */
/* ------------------------------------ */

#include <bits/stdc++.h>

using namespace std;

const int mx = int(2 * 1e5 + 1);

int n, m, d = 0;
bool vt[mx];
vector<int> a[mx], ra[mx];
stack<int> st;

struct ifo
{
    vector<int> v;
    int len;
};

ifo kq[mx];

bool cmp(ifo x1, ifo x2)
{
    return x1.len > x2.len;
}

void inp()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
        ra[y].push_back(x);
    }
}

void dfs1(int u)
{
    vt[u] = true;
    for (auto v : a[u])
    {
        if (!vt[v])
            dfs1(v);
    }
    st.push(u);
}

void dfs2(int u)
{
    vt[u] = true;
    for (auto v : ra[u])
    {
        if (!vt[v])
            dfs2(v);
    }
    (kq[d].v).push_back(u);
}

void mn()
{
    memset(vt, false, sizeof(vt));
    for (int i = 1; i <= n; i++)
    {
        if (!vt[i])
        {
            dfs1(i);
        }
    }
    memset(vt, false, sizeof(vt));
    cout << endl;
    while (!st.empty())
    {
        int u = st.top();
        st.pop();
        if (!vt[u])
        {
            dfs2(u);
            kq[d].len = (kq[d].v).size();
            d++;
        }
    }
    sort(kq, kq + d, cmp);
    cout << d << endl;
    for (auto it : kq[0].v)
        cout << it << " ";
}

int main()
{
    inp();
    mn();
    return 0;
}