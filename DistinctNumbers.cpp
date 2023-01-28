#include<bits/stdc++.h>
 
#define ll long long
#define ld long double
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define nl '\n'
const ll md = 1e9 + 7;
 
using namespace std;
 
int n;
set <int> s;

int main()
{
	fast_cin
 	cin >> n;
	map <int, int> mp;
	while (n--) {
		int x;
		cin >> x;
		s.insert(x);
	}
	cout<<s.size();
    return 0;
}