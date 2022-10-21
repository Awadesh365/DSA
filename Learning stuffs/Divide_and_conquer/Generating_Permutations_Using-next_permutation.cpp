/*
   next_permutation:- if the next permutation is possible it return truen and it convert the array into the just largest permutation of the array
   by using next_permuation(a.begin(),a.end()) if there is no next permutation
   is left it returns false.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {232, 43, 545, 654, 33};
    while (next_permutation(a.begin(), a.end()))
    {
        for (auto &it : a)
            cout << it << " ";

        cout << endl;
    }
    cout << next_permutation(a.begin(), a.end()) << endl;

    return 0;
}