#include "bits/stdc++.h"
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, ans = 0;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int &x : a)
        cin >> x;

    for (int &x : b)
        cin >> x;

    int j = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        if (i && a[i - 1] == a[i])
        {
            ans += c;
            continue;
        }
        c = 0;
        while (j < m && a[i] > b[j])
            j++;
        while (j < m && a[i] == b[j])
            j++, c++;
        ans += c;
    }

    cout << ans;
}