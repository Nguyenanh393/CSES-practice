#include<bits/stdc++.h>
 
#define ll long long
#define ld long double
#define nl '\n'
 
using namespace std;
 
ll n, x, y, M, res;

int main()
{
 	cin >> n;
	while (n--) {
		cin >> x >> y;
		M = max(x, y);
		if (M % 2 == 0)
		{
			res = M * (M-1) + 1 + x - y;
		} else {
			res = M * (M-1) + 1 - x + y;
		}
		
		cout << res << nl;
	}
    return 0;
}