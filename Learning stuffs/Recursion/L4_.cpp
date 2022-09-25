#include <bits/stdc++.h>
using namespace std;
/*
  1. Reverse a vector/array
*/
// you need to use '&' to pass array by address
int reverse_array(vector<int> &arr, int l, int r)
{
    if (l >= r)
        return 0;

    swap(arr[l], arr[r]);
    reverse_array(arr, l + 1, r - 1);

    return 0;
}
/*
  2. Check if a string is palindrome or not
*/
bool is_palindrome(string s, int n, int i)
{
    if (i >= n / 2)
        return true;

    if (s[i] != s[(n - 1) - i])
        return false;

    return is_palindrome(s, n, i + 1);
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;

    int l = 0, r = n - 1;

    reverse_array(a, l, r);

    for (auto &it : a)
        cout << it << " ";

    cout << endl;

    int m;
    cin >> m;

    string s;
    cin >> s;
    cout << is_palindrome(s, m, 0) << endl;

    return 0;
}