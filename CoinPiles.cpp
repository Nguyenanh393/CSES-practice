#include<bits/stdc++.h>
 
#define ll long long
#define ld long double
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define nl '\n'
const ll md = 1e9 + 7;
 
using namespace std;
 
ll n,a,b;
 
int main()
{
	cin >> n;
	while (n--) {
		cin >> a >> b;
		if ((a + b)%3==0 && min(a,b) * 2 >= max(a,b)) {
			cout << "YES"<<nl;
		} else {
			cout << "NO"<<nl;
		}
	}
    return 0;
}