// in subsequence you can't leave the char in the middle, whearas in substring you can.
#include <iostream>
#include <vector>
using namespace std;

vector<string> gss(string s)
{
}
int main()
{
    string s;
    cin >> s;
    vector<string> ans = gss(s);
    int cnt = 0;

    cout << '[';
    for (string str : ans)
    {
        if (cnt != ans.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout << ']';
}