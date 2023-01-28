#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
ll n,s;
int main ()
{
	cin>>n;
	s = n* (n+1)/2;
	n--;
	while (n--)
	{
		ll i;
		cin>>i;
		s-=i;
	}
	cout<<s;
}