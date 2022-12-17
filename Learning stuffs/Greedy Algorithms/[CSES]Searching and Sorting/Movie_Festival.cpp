/*  Awadesh Nautiyal  */
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

// For debugging
/*-------------------------------------------------*/
#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t)
{
    cerr << t;
}
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(ld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << ",";
    _print(p.ss);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
// END of Debugging
/*--------------------------------------------*/
const ll N = 1e6;
void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> arr;
    for (ll i = 0; i < n; i++)
    {
        ll starting_time, ending_time;
        cin >> starting_time >> ending_time;
        arr.push_back({ending_time, starting_time});
    }

    // sorting from the end, exchange arguments.
    sort(arr.begin(), arr.end());

    ll start = arr[0].first; // ending time of the first interval
    ll ans = 1;
    for (ll i = 1; i < n; i++)
    {
        if (start <= arr[i].second)
        {
            ans++;
            start = arr[i].first; /* after we have wathed the fist movie, we are going to watch this movie, so we are now
                     concern about the ending time of the present movie,
                    so we have updated the ending time of the movie, so that we can check it to some other interval.*/
        }
    }

    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // ll TESTS;
    // cin >> TESTS;
    // while (TESTS--)
    solve();

    return 0;
}