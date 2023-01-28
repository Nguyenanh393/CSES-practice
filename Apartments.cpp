#include<bits/stdc++.h>
 
#define ll long long
#define ld long double
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define nl '\n'
const ll md = 1e9 + 7;
 
using namespace std;
int main()
{
	fast_cin
 	int n, m, k;
	cin >> n >> m >> k;
	int a[n], b[m];
	//cout << n << " " << m <<nl<<k<<nl;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	
	sort(a, a+n);
	sort(b, b+m);
	
	int c=0;
	for (int i = 0, j = 0; i < n,j < m;) {
		if (a[i] - k > b[j]) {
			j++;
		} else {
			if (a[i] + k < b[j]) {
				i++;
			} else {
				c++,i++,j++;
			}
		}
		//cout<< i <<" " <<j<<nl;
	}
	cout<<c;
    return 0;
}