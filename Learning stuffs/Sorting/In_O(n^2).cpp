/*
Awadesh Nautiyal
 in O(n^2) algorithms includes bubble sort,insersion sort, and selection sort algorithm.
 https://csacademy.com/lesson/sorting/
 https://usaco.guide/bronze/intro-sorting?lang=cpp
https://www.geeksforgeeks.org/sorting-algorithms/
*/

#include <bits/stdc++.h>
using namespace std;

/*
Selection sort:-
In this algorithm, we need two arrays here, the first solution is based on building the sorted array from scrach:
take the smallest, place it at the beginning of the new array, and remove it from the old array.
since we need to find the minimum element N times, the number of operations is
N+(N+1)+(N-2)+...+1 = (N*(N+1))/2 = O(n^2)
*/
vector<int> Selection_sort(vector<int> v)
{
    vector<int> sorted; // the new array which is going to be returned

    while (v.size()) // till when the v does have element (s)
    {
        // finding the minimum element
        int index_min = 0;
        for (int i = 1; i < (int)v.size(); i++)
        {
            if (v[i] < v[index_min])
                index_min = i;
        }
        // insert that next smallest element in the new array
        sorted.push_back(v[index_min]);

        // remove that next smallest element from the old array
        v.erase(v.begin() + index_min);
    }
    // return when all elements are sorted
    return sorted;
}

int main()
{
    vector<int> check1 = {120, 4, 423, 76, 3, 9, 91, 0};
    vector<int> check2 = {120, 4, 423, 76, 3, 9, 91, 0};
    vector<int> check3 = {120, 4, 423, 76, 3, 9, 91, 0};

    vector<int> ans = Selection_sort(check1);
    for (auto &it : ans)
        cout << it << " ";

    cout << endl;

    return 0;
}