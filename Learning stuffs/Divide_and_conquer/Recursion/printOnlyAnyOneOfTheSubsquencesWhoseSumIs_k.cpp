#include <bits/stdc++.h>
using namespace std;

// qest:- printOnlyAnyOneOfTheSubsquencesWhoseSumIs_k

bool subseq(vector<int> &ans, vector<int> arr, int idx, int sz, int k, int sum)
{
    if (idx == sz)
    {
        if (sum == k)
        {
            for (auto it : ans)
                cout << it << " ";
            cout << endl;

            return true;
        }

        return false;
    }

    // pick condition
    ans.push_back(arr[idx]);
    sum += arr[idx];
    if (subseq(ans, arr, idx + 1, sz, k, sum) == true)
        return true;

    // not pick condition
    sum -= arr[idx];
    ans.pop_back();
    if (subseq(ans, arr, idx + 1, sz, k, sum) == true)
        return true;

    return false;
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
