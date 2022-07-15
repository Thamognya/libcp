#include <bits/stdc++.h>

using namespace std;

#pragma GCC optimize("Ofast,unroll-loops") 
#pragma GCC target("avx,avx2,avx512,fma") 

void dbg_out() 
{ 
    cerr << endl;
}

#ifdef LOCAL
    #define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
    #define dbg(...)
#endif

/* SIMPLE DATA TYPES START */
#define ar array
#define lll long long
#define ll long long int
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
/* SIMPLE DATA TYPES END*/
/* CONSTANTS START */
#define PI 3.1415926535897932384626433832795l 
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
/* CONSTANTS END */
/* BITWISE START */
// a=target variable, b=bit number to act upon 0-n
#define BIT_SET(a,b) ((a) |= (1ULL<<(b)))
#define BIT_CLEAR(a,b) ((a) &= ~(1ULL<<(b)))
#define BIT_FLIP(a,b) ((a) ^= (1ULL<<(b)))
// '!!' to make sure this returns 0 or 1
#define BIT_CHECK(a,b) (!!((a) & (1ULL<<(b))))
#define BITMASK_SET(x, mask) ((x) |= (mask))
#define BITMASK_CLEAR(x, mask) ((x) &= (~(mask)))
#define BITMASK_FLIP(x, mask) ((x) ^= (mask))
#define BITMASK_CHECK_ALL(x, mask) (!(~(x) & (mask)))
#define BITMASK_CHECK_ANY(x, mask) ((x) & (mask))
/* BITWISE END */
/* MATH START */
// gcd
ll gcd(ll a, ll b)
{
    return __gcd(a, b);
}
// lcm
ll lcm(ll a, ll b)
{
    return lcm(a, b);
}
// PROBAB START
// factorial
ll fact(ll n) 
{
    if (n <= 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}
// combinations
ll ncr(ll n, ll r)
{
    return (fact(n) / fact(r) * fact(n - r));
}
// permutations
ll npr(ll n, ll r)
{
    return (fact(n) / fact(n - r));
}
// PROBAB END
// greatest prime facto
ll getMaxPrimefactor(ll n) 
{
    ll maxPF = -1;
    while (n % 2 == 0) 
    {
        maxPF = 2;
        n /= 2;
    }
    for (int i = 3, j = sqrt(n); i <= j; i += 2) 
    {
        while (n % i == 0) 
        {
            maxPF = i;
            n = n / i;
        }
    }
    if (n > 2)
    {
        maxPF = n;
    }
    return maxPF;
}
// GEO BEGIN
// GEO END
/* MATH END */



void solve()
{

}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //int tc = 1;
    // cin >> tc;
    //for (int t = 1; t <= tc; t++) 
    //{
    //}
    solve();
}
