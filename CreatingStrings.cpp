#include<bits/stdc++.h>
 
#define ll long long
#define ld long double
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define nl '\n'
const ll md = 1e9 + 7;
 
using namespace std;
 
int count = 0;
ll giaithua(ll n) {
	ll t;
	if(n==1) return 1;
	else t = n * giaithua(n-1);
	return t;
}
 
int main()
{
	string s;
	cin >> s;
	ll tich = 1;
	
	ll n = s.size();
	char a[n];
	map <int, int> count;
	for (int i = 0; i < n; i++) {
		a[i] = s[i];
		count[s[i]] ++;
	}
	
	for (auto e : count) {
		tich *= giaithua(e.second);
	}
	
	cout << giaithua(n)/tich <<nl;
	
	sort(a, a+n);
	
	do
		{
			for(int i = 0; i < n; i++){
				cout << a[i];
			} cout<<'\n';
		}
	while (next_permutation(a,a+n));
 
    return 0;
}