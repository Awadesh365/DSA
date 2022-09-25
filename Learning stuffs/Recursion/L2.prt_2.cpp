/*
using Backtracking
   print linearly from 1 to n
   print from n to 1
*/
#include <bits/stdc++.h>
using namespace std;

int print_from_1_to_n(int i, int n)
{
    if (i < 1)
        return 0;

    print_from_1_to_n(i - 1, n);
    cout << i << " ";
    return 0;
}
int print_from_n_to_1(int i, int n)
{
    if (i > n - 1)
        return 0;

    print_from_n_to_1(i + 1, n);
    cout << (i + 1) << " ";
    return 0;
}
int main()
{
    int n = 10;

    print_from_1_to_n(n, n);
    cout << endl;
    print_from_n_to_1(0, n);
    return 0;
}