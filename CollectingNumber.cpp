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
    x[0] = LLONG_MAX;
    for(int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        x[a] = i;
        
    }
    for (int i = 1; i <= n; i++) {
        if (x[i] < x[i-1]) {
            ans += 1;
        }
    }
    
    cout << ans;
}