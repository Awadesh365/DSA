// generating subsets recursively

#include <bits/stdc++.h>
using namespace std;

int n;
int weights[20];

int solve(int i, int s1, int s2)
{
    if (i == n)
        return abs(s1 - s2);
    return (min(solve(i + 1, s1 + weights[i], s2), solve(i + 1, s1, s2 + weights[i])));
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> weights[i];

    cout << solve(0, 0, 0) << endl;
    return 0;
}