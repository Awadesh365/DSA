#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "GoodToSeeYou";
    // starting from 0 and going to 1, not including the 2nd index.
    string a = s.substr(0, 2);

    int x = 3;
    string b = s.substr(1, x); // starting from 1 index and going till before x, not including x, i.e exclusive.

    cout << a << " " << b << endl;
    cout << "-----------" << endl;
    cout << s.substr(x - 3) << endl;

    return 0;
}