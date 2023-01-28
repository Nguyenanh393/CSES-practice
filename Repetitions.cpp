#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int n, longest = -INT_MAX;
int cnt = 1;
string str;
int main ()
{
	cin>> str;
	n = str.length();
	for (int i = 1; i<=n; i++)
	{
		if (str[i]==str[i-1]) {
			cnt ++;
		} else {
			longest = max (longest, cnt);
			cnt= 1;
		}
	}
	cout<<longest;
}