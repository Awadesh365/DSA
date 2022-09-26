#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if (n <= 1)
        return n;

    return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    cout << fibo(6);
    return 0;
}