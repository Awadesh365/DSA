#include <bits/stdc++.h>
using namespace std;

void generate_subsequences(int ind, vector<int> &ds, vector<int> arr, int n)
{
    if (ind == n)
    {
        for (auto &it : ds)
            cout << it << " ";

        if (ds.size() == 0)
            cout << "{}";

        cout << endl;
        return;
    }

    generate_subsequences(ind + 1, ds, arr, n);

    ds.push_back(arr[ind]);
    generate_subsequences(ind + 1, ds, arr, n);
    ds.pop_back();
}
int main()
{
    int n = 3;
    vector<int> a = {21, 34, 54};
    vector<int> ds;
    generate_subsequences(0, ds, a, n);

    return 0;
}