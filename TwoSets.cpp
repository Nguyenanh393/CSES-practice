#include<bits/stdc++.h>
 
#define ll long long
#define ld long double
#define nl '\n'
 
using namespace std;
 
ll n;

int main()
{
	cin >> n;
	ll sum = n * (n+1)/ 2;
	if (sum & 1) {
		cout << "NO";
	} else {
		cout << "YES" << nl;
		cout << n/2<<nl; 
		ll midsum = sum / 2;
		for (int i = 1; i <= n/4; i++) {
			cout << i << " " << n + 1 - i << " ";
			midsum = midsum - n - 1;
		}
		if (midsum) {
			cout << midsum << nl;
		} else {
			cout << nl;
		}
	
		cout << n - n/2 << nl;
		for (int i = n/4 + 1; i <= n - n/4; i++) {
			if (i == midsum) {
				continue;
			} else {
				cout << i << " ";
			}
		}
	}
}