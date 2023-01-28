#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ld long double
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define nl '\n'
#define pb push_back
const ll md = 1e9 + 7;

ll n;
vector <ll> p;

int main() {

    cin >> n;
    for(int i = 0; i < n; i++) {
        ll p_temp;
        cin >> p_temp;
        p.push_back(p_temp);
    }

    sort(p.begin(), p.end());

    ll med = p[n/2];

    ll sum = 0;
    for(int i = 0; i < n; i++) {
        sum += abs(p[i] - med);
    }
    cout << sum;
}

