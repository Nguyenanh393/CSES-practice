#include<bits/stdc++.h>
 
#define ll long long
#define ld long double
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define nl '\n'
#define pb push_back
const ll md = 1e9 + 7;
 
using namespace std;
 
int n,x,y,m;
vector <pair <int, int> > v;
int res=0;
 
int main()
{
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		v.pb(make_pair(x,1));
		v.pb(make_pair(y,-1));
	}
	sort(v.begin(),v.end());
	for (auto e : v) {
		res += e.second;
		m = max(res,m);
	}
	cout << m;
}