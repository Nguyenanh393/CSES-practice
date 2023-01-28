#include<bits/stdc++.h>
 
#define ll long long
#define ld long double
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define nl '\n'
const ll md = 1e9 + 7;
 
using namespace std;
 
ll n;
ll mod(ll a, ll n) {
	if (n==0) return 1;
	ll res = 1;
	while (n>0) {
		if (n&1) res = (res * a) % md;
		a = (a*a) % md;
		n/= 2;
	}
	return res;
}

int main()
{
	fast_cin
 	cin >> n;
	cout << mod (2, n);
    return 0;
}