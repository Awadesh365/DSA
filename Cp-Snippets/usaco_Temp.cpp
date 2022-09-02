// Before submitting solutions in usaco problems you should add following in your code.


#include <cstdio> //  <-  1 This Header with your existing Header



// 2 ->  input output for the submission in usaco problmes  
void setIO(string name = "")
{ // FastIO see General -> Fast Input and Output
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    if (name.size())
    {
        freopen((name + ".in").c_str(), "r", stdin);
        freopen((name + ".out").c_str(), "w", stdout);
    }
}

int main()
{
     setIO("");    /* <- 3 -> This funtion call, add the name of input/output inside those quotation marks, let's say your name of
     input and output of your problem is ThreeBalls.in and  ThreeBalls.out then you should add ThreeBalls inside Those quotation marks.
     eg setIO("ThreeBalls");
*/
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // precompute();

    // ll TESTS;
    // cin >> TESTS;
    // while (TESTS--)
    solve();

    return 0;
}
