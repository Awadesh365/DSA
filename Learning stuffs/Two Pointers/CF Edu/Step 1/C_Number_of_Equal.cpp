/*  Awadesh Nautiyal    */
#include <bits/stdc++.h>
using namespace std;

int return_idx(vector<int> arr, int check)
{
    bool test = false;
    int idx = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (check == arr[i])
        {
            test = true;
            idx = i;
        }
    }
    if (test)
        return idx;
    else
        return -1;
}

/*****
 *
 *
 *
 *
 *
 *                       NOT CORRECT
 *
 *
 *
 *
 *
 * *****/
void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (auto &it : a)
        cin >> it;

    for (auto &it : b)
        cin >> it;

    vector<int> check1(n, 0), check2(m, 0);

    long long cnt = 0;

    for (auto &it : a)
        check1[it]++;

    for (auto &it : b)
        check2[it]++;

    set<int> find1, find2;
    for (auto &it : a)
        find1.insert(it);

    for (auto &it : b)
        find2.insert(it);

    a.clear();
    b.clear();

    for (auto &it : find1)
        a.push_back(it);

    for (auto &it : find2)
        b.push_back(it);

    for (int i = 0; i < a.size(); i++)
    {
        // int sum = 1;
        if (binary_search(b.begin(), b.end(), a[i]))
        {
            int idx = return_idx(b, a[i]);
            if (idx != (-1) && idx <= b.size() - 1 && idx <= check2.size() - 1)
            {
                long long sum = (check1[a[i]] * check2[b[idx]]);
                cnt += sum;
            }

            // cout << check1[a[i]] << " " << check2[b[idx]] << " " << idx << " " << b[idx];
        }
    }

    cout << cnt << endl;
}
int main()
{
    solve();
    return 0;
}