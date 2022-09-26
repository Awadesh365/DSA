#include <bits/stdc++.h>
using namespace std;

int sol(int n)
{
    if (n == 0)
        return 0;

    return (n + sol(n - 1));
}

int fact(int n)
{
    if (n <= 1)
        return 1;

    return (n * fact(n - 1));
}
int main()
{
    int n;
    cin >> n;
    cout << sol(n) << endl;

    int m;
    cin >> m;
    cout << fact(m) << endl;
    return 0;
}