#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ld long double
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define nl '\n'
#define pb push_back
const ll md = 1e9 + 7;
 
int k[200002];
int n, ans = 0;

int main() { 
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> k[i];
    } 

    map <int, int> mp;

    int begin = 1;
    for (int i = 1; i <= n; i++) {
        begin = max(begin, mp[k[i]]+1);
        ans = max(ans, i - begin + 1);
        mp[k[i]] = i;
    }

    cout << ans << nl;
}