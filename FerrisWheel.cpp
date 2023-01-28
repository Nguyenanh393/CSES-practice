#include<bits/stdc++.h>
 
#define ll long long
#define ld long double
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define nl '\n'
const ll md = 1e9 + 7;
 
using namespace std;
 
int main()
{
	int n, x;
	cin >> n >> x;
	int p [n];
	
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}
	
	sort(p, p+n);
	
	int c=0;
	for (int i = 0, j = n-1;j > i;) {
		while (i < j && p[i] + p[j] > x) {
			j--;
		}
		if(i >=j) break;
		c++; i ++; j--;
	}
	cout<<n - c;
    return 0;
}