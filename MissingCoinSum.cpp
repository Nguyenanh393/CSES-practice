#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ld long double
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define nl '\n'
#define pb push_back
const ll md = 1e9 + 7;

ll x[200002];
ll n, ans = 0;

int main() {
    cin >> n;
    x[0] = 0;
    ll k = 1;
    for(int i = 1; i <= n; i++) {
        cin >> x[i];
    }

    sort(x, x + n + 1);

    for(int i = 1; i <= n; i++) {
        k += x[i-1];
        if (k < x[i]){
            ans = k;
            break;
        }
    }
    if (ans == 0) ans = k + x[n];
    cout << ans;
}