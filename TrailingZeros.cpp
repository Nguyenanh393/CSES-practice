#include<bits/stdc++.h>
 
#define ll long long
#define ld long double
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define nl '\n'
const ll md = 1e9 + 7;
 
using namespace std;
 
ll n;
ll zero(ll n) {
	if (n==0) return 0;
	ll res = 0;
	while (n>0) {
		int k = 5;
		n /= k;
		res += n;
	}
	return res;
}

int main()
{
	fast_cin
	cin >> n;
	cout <<zero(n);
}