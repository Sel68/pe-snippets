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

ll dist(pair<ll, ll> a, pair<ll,ll> b){
    ll dx = a.ff - b.ff, dy = a.ss - b.ss;
    return dx*dx + dy*dy;
}

// pass points sorted by X and Y
ll closest_point(vector<pair<ll,ll>> Px, vector<pair<ll,ll>> Py){
    int n = sz(Px);
    if (n<=3){
        ll mn = LLONG_MAX;
        fli(i,0,n){
            fli(j,i+1, n) mn = min(mn, dist(Px[i], Px[j]));
        }
        return mn;
    }

    int mid = n/2; ll midx = Px[mid].ff;
    vector<pair<ll,ll>> Lx, Rx, Ly, Ry;
    fli(i,0,mid) {Lx.pb(Px[i]); Ly.pb(Px[i]);}
    fli(i,mid, n) {Rx.pb(Px[i]); Ry.pb(Px[i]);}

    ll dl = closest_point(Lx, Ly), dr = closest_point(Rx, Ry);
    ll d = min(dl, dr);
    
    vector<pair<ll,ll>> S;
    fli(i,0,n) if (abs(Py[i].ff-midx)<d) S.pb(Py[i]);

    ll mn = d;
    fli(i,0,sz(S)){
        fli(j,i+1,min((int)sz(S), i+8)) mn = min(mn, dist(S[i], S[j]));
    } return mn;

}