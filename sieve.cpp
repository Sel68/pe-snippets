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


vector<int>* sieve(int mx){

    vector<int>* primes = new vector<int>(mx, 1);
    (*primes)[0] = (*primes)[1] = 0;

    fli(i,2,sqrt(mx)+1){
        if ((*primes)[i]) for (int j=2*i; j<mx; j+=i) (*primes)[j] = 0;
    }
    return primes;
}

vector<int>* primes = sieve(1e8);