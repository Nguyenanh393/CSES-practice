#include<bits/stdc++.h>
 
#define ll long long
#define ld long double
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define nl '\n'
const ll md = 1e9 + 7;
 
using namespace std;
 
int q;
 
int main()
{
	cin >> q;
	while (q--) {
		ll k;
		cin >> k;
		ll i = 1;
		while (k > 9 * pow(10,i-1) * i) {
			ll sub = 9 * pow(10,i-1) * i;
			//cout << sub << nl;
			k -=  sub;
			i++;
			//cout << k << " " << i<< nl;
		}
		
		
		if (i==1) {
				ll num = k/i;
				//cout << digit << " " << num<< nl;
				cout << num % 10 <<nl;
			} else {
				k--;
				ll num = pow(10,i-1);
				string S = to_string(num + k/i);
    			cout<<  (int) (S[k%i] - '0')<<nl;
			}
	}
    return 0;
}