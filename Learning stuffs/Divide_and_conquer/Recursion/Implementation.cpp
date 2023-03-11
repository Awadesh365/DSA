#include <bits/stdc++.h>
using namespace std;

const int N = 18;
vector<long long> fact(N);

// dp
void findFactorial()
{
        fact[0] = 1;
        for (long long i = 1; i <= N; i++)
                fact[i] = (fact[i - 1] * i);
}

// recursive
long long factorial(long long n)
{
        if (n <= 1)
                return 1;

        return n * factorial(n - 1);
}

// iterative
long long Factorial(long long n)
{
        long long ans = 1;
        while (n)
        {
                ans *= n;
                n--;
        }

        return ans;
}

int main()
{
        int n;
        cin >> n;

        cout << factorial(n) << endl;
        
        cout << Factorial(n) << endl;
        
        findFactorial();
        cout << fact[n] << endl;
        
}
