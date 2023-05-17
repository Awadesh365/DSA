#Printing nth fibonacci number

Approach 1:- Using Recursion
```cpp
// Tmcom;- O(2^n)
// spCom:- O(1)
int Recr(int n)
{
    if (n <= 1)
        return n;

    return Recr(n - 1) + Recr(n - 2);
}
```

Approach 2:- Using DP(Memoization)
```cpp
// top down or memoization
// tmComp:- O(n)
// spComp:- O(n)  + O(n)[Stack space]
int memo(int n, vector<int> &dp)
{
    if (n <= 1)
        return n;

    if (dp[n] != -1)
        return dp[n];

    return dp[n] = memo((n - 1), dp) + memo((n - 2), dp);
}
```

Approach 3:- Dp (Tabulation)
```cpp
// bottom up or Tabulation
// tmComp:- O(n)
// spComp:- O(n)
int tabu(int n)
{
    vector<int> dp(n + 1);
    dp[0] = 0, dp[1] = 1;
    for (int i = 2; i <= n; i++)
        dp[i] = dp[i - 1] + dp[i - 2];

    return dp[n];
}
```

Approach 4:- DP (With Space optimization)
```cpp
// DP with space Optimization
// tmComp:- O(n)
// spComp:- O(1)
int opt(int n)
{
    int prev2 = 0, prev = 1;
    for (int i = 2; i <= n; i++)
    {
        int cur = prev2 + prev;
        prev2 = prev;
        prev = cur;
    }
    return prev;
}
```
