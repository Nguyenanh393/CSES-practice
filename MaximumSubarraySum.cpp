#include<bits/stdc++.h>
 
#define ll long long
#define ld long double
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define nl '\n'
#define pb push_back
const ll md = 1e9 + 7;
 
using namespace std;
 
ll n,x;
ll m = -INT_MAX, res = -INT_MAX;

int main()
{
	fast_cin
 	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> x;
		m = max(x, m+x);
		res = max(res, m);
	}
	cout << res;
    return 0;
}