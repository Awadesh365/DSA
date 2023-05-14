#include <bits/stdc++.h>
using namespace std;

// qest:- print the subsquences whose sum is k
// only change is we have added sum+=arr[idx] in the case of pick and substracted sum-=arr[idx], in the case of not pick 
// and the check in the beginning that sum is equal to k or

void subseq(vector<int> &ans, vector<int> arr, int idx, int sz, int k, int sum)
{
    if (idx == sz)
    {
        if (sum == k)
        {
            for (auto it : ans)
                cout << it << " ";
            cout << endl;
        }

        return;
    }

    // pick condition
    ans.push_back(arr[idx]);               // i am just printing the first one
    sum += arr[idx];
    subseq(ans, arr, idx + 1, sz, k, sum); // i have faith in you, that you can do pick and push_back, the next idx+1 conditions.

    // not pick condition
    sum -= arr[idx];
    ans.pop_back();                        // i am removing the first one
    subseq(ans, arr, idx + 1, sz, k, sum); // i have faith in you, that you can not pick and remove elements by yourself, the next idx+1 conditions.
}
int main()
{
    int k = 2;
    // {3,1,2}
    vector<int> arr = {1, 1, 2};
    vector<int> ans;
    subseq(ans, arr, 0, (arr.size()), k, 0);

    return 0;
}
