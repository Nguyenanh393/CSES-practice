#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ld long double
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define nl '\n'
#define pb push_back
const ll md = 1e9 + 7;

ll x[200002], X[200002];
ll n, m;

int main() {
    cin >> n >> m;
    x[0] = 0;
    for(int i = 1; i <= n; i++) {
        int t;
        cin >> t;
        x[t] = i;
        X[i] = t;
    }
    ll ans = 1;
    for (int i = 2; i <= n; i++) {
        if (x[i] < x[i-1]) {
            ans += 1;
        }
    }

    while(m--) {
        int a, b; 
        cin >> a >> b;
        
		swap(X[a], X[b]);
        int A = X[a], B = X[b];

        ans +=  (x[B-1] <= x[B] && x[B-1] > b) +
                (x[B] <= x[B+1] && x[B+1] < b) -
                (x[B-1] > x[B] && x[B-1] <= b) -
                (x[B] > x[B+1] && x[B+1] >= b);	

		x[B] = b;

        ans +=  (x[A-1] <= x[A] && x[A-1] > a) +
                (x[A] <= x[A+1] && x[A+1] < a) -
                (x[A-1] > x[A] && x[A-1] <= a) -
                (x[A] > x[A+1] && x[A+1] >= a);	

		x[A] = a;

		cout<<ans<<nl;
    }
}