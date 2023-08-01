#include <bits/stdc++.h>
using namespace std;

// qest:- countTheNumberOfTheSubsquencesWhoseSumIs_k

int cntSubseq(int ind, int s, int sum, int arr[], int n)
{
    if (ind == n)
    {
        if (s == sum)
            return 1;
        else
            return 0;
    }

    s += arr[ind];
    int l = cntSubseq(ind + 1, s, sum, arr, n);

    s -= arr[ind];

    // not picked
    int r = cntSubseq(ind + 1, s, sum, arr, n);
    return l + r;
}
int main()
{
    int k = 2;
    // {3,1,2}
    int arr[] = {1, 1, 2};
    int n = 3;
    int sum = 2;
    cout << cntSubseq(0, 0, sum, arr, n);

    return 0;
}
