#include<bits/stdc++.h>
 
#define ll long long
#define ld long double
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define nl '\n'
#define pb push_back
const ll md = 1e9 + 7;
 
using namespace std;
 
int n, x;
map <int, int> m;

int main()
{
	cin >> n >> x;
	
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (m.find(x - a) != m.end()) {
			cout << m[x-a] + 1 << " " << i + 1;
			return 0;
		}
		m[a] = i;
	}
	cout << "IMPOSSIBLE";	
}