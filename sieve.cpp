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

//NRVO, RVO
vector<int> sieve(int mx){

    vector<int> primes(mx, 1);
    primes[0] = primes[1] = 0;

    int sqrt_lim = (int)sqrt(mx);
    fli(i,2,sqrt_lim+1){
        if (primes[i]) for (int j=i*i; j<mx; j+=i) primes[j] = 0;
    }
    return primes;

    vector<int> prime_list;
    // fli(i,2, mx) if (primes[i]) prime_list.pb(i); return prime_list;
}

// vector<int> primes = sieve(1e8);