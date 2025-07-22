#include <bits/stdc++.h>
using namespace std;
#define sz(a) a.size()
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define fli(i,fc,n) for(int i=fc;i<n;i++)
#define nl "\n"
#define ff first
#define ss second


// count of nums in [1, x] divisible by any v[i]
ll div_PIE(vector<int> v, ll x){
    int n = sz(v);
    ll res = 0;
    fli(i,1, 1<<n){
        ll prod = 1, bits = 0;
        fli(j,0,n){
            if (i & (1<<j)){
                prod*=v[j]; bits++;
            }
        }
        if (!prod) continue;
        ll k = x/prod;
        res += (bits&1 ?  k:-k);
    } return res;
}
