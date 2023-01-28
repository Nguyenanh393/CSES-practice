#include<bits/stdc++.h>
 
#define ll long long
#define ld long double
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define nl '\n'
const ll md = 1e9 + 7;
 
using namespace std;
 
int n, p[21];
int main()
{
	fast_cin
 	cin >> n;
	ll s = 0, a = 0;
	
	for (int i = 0; i < n; i++) {
		cin >> p[i];
		s += p[i];
	}
	
	for (int i = 0; i < 1 << n; ++i) {
		ll c = 0;
		for (int j = 0; j < n; ++j) {
			if (i >> j & 1) {
				c += p[j];
			}
		}
		
		if (c <= s/2) {
			a = max (c, a);
			//cout << a << nl;
		}
	}
	
	cout << s - 2 * a;
    return 0;
}