/*
   print name n times
   print linearly from 1 to n
   print from n to 1
   print linearly from 1 to n ( using backtracking)
   print n to 1 (usig backtracking)

*/
#include <bits/stdc++.h>
using namespace std;

int print_name(int i, int n)
{
    if (i > n)
        return 0;

    cout << "Awadesh" << endl;
    print_name(i + 1, n);
    return 0;
}
int print_from_1_to_n(int i, int n)
{
    if (i > n)
        return 0;

    cout << i << " ";
    print_from_1_to_n(i + 1, n);
    return 0;
}
int print_from_n_to_1(int i, int n)
{
    if (i < 1)
        return 0;

    cout << i << " ";
    print_from_n_to_1(i - 1, n);
    return 0;
}
int main()
{
    int n = 10;
    print_name(1, n);
    cout << endl;
    print_from_1_to_n(1, n);
    cout << endl;
    print_from_n_to_1(n, 1);
    return 0;
}