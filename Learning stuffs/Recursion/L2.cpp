/*
   print name 5 times
   print linearly from 1 to n
   print from n to 1
   print linearly from 1 to n ( using backtracking)
   print n to 1 (usig backtracking)

*/
#include <bits/stdc++.h>
using namespace std;

int print_name(int n)
{
    if (!n)
        return 0;

    cout << "Awadesh" << endl;
    n--;
    print_name(n);
    return 0;
}
int print_n_to_1(int n)
{
    if (!n)
        return 0;

    cout << n << endl;
    n--;
    print_n_to_1(n);
    return 0;
}
int print_1_to_n(int n)
{
    if (n > 10)
        return 0;

    cout << n << endl;
    n++;
    print_1_to_n(n);
    return 0;
}
int main()
{
    int n = 10;
    print_name(n);
    cout << endl;

    print_n_to_1(n);
    cout << endl;

    n = 1;
    print_1_to_n(n);
    cout << endl;

    return 0;
}