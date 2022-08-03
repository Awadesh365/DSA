// Binary Exponentiation (Log(n)) complexity
// a^b
// references ---> https://cp-algorithms.com/algebra/binary-exp.html
//   ---> https://www.youtube.com/watch?v=K8mJ27S72v0&list=PLauivoElc3giVROwL-6g9hO-LlSen_NaV&index=12
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;

// Binary Exponentiation Iterative Approach. (Recommended)
ll BinPow(ll a, ll b)
{
    a %= MOD;
    ll result = 1;
    while (b > 0)
    {
        if (b & 1)
            result = (result * a) % MOD;

        a = a * a;
        b = (b >> 1);
    }
    return result;
}

// Binary Exponentiation Recursive Approach. (Not Recommended) <-- slow as compare to Iterative one
ll BinPowRecur(ll a, ll b)
{
    if (b == 0)
        return 1;

    ll result = BinPowRecur(a, b / 2);
    if (b & 1)
        return ((a * result * result) % MOD) % MOD;

    return (result * result) % MOD;
}

int main()
{
    ll a = 2, b = 13;
    cout << BinPow(a, b) << endl;

    return 0;
}
