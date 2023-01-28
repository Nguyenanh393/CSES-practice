#include<bits/stdc++.h>
 
#define ll long long
#define ld long double
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define nl '\n'
#define pb push_back
const ll md = 1e9 + 7;
 
using namespace std;
 
int n, m;
multiset <int> H;
 
int main()
{
	fast_cin
 	cin >> n >> m;
	
	while (n--) {
		ll h;
		cin >> h;
		H.insert(h);
	}
	
	while (m--) {
		ll t;
		cin >> t;
		std::multiset<int>::iterator p = H.upper_bound(t);
		if (H.upper_bound(t) != H.begin()) {
			p--;
			cout << *(p)  <<nl;
			H.erase(p);
		} else cout << -1 << nl;
	}
    return 0;
}