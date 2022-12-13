/*
https://practice.geeksforgeeks.org/problems/activity-selection-1587115620/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

You are given n activities with their start and finish times. Select the maximum number of
 activities that can be performed by a single person, assuming that a person can only work
 on a single activity at a time.

 sample case 1
  Input: start[]  =  {10, 12, 20}, finish[] =  {20, 25, 30}
  Output: 0 2

  sample case 2
    Input: start[]  =  {1, 3, 0, 5, 8, 5}, finish[] =  {2, 4, 6, 7, 9, 9};
    Output: 0 1 3 4
*/

#include <bits/stdc++.h>
using namespace std;

static bool pairCompare(const pair<pair<int, int>, int> &a, const pair<pair<int, int>, int> &b)
{
    if (a.first.second != b.first.second)
        return a.first.second < b.first.second;

    return a.second < b.second;
}

int activitySelection(vector<int> start, vector<int> end, int n)
{
    vector<pair<pair<int, int>, int>> x;

    for (int i = 0; i < n; i++)
        x.push_back({{start[i], end[i]}, i + 1});

    sort(x.begin(), x.end(), pairCompare); // works without passing the parameters, because static was used in the function,

    int last = 0;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (x[i].first.first > last)
        {
            ans++;
            last = x[i].first.second;
        }
    }
    return ans;
}

int main()
{
}