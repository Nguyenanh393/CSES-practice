#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int n;
ll x, x1, sum=0;
int main ()
{
	cin>> n >> x1;
	n--;
	while (n--)
	{
		cin>>x;
		
		if (x < x1) sum += (x1 - x);
		else x1 = x;
	}
	cout<<sum;
}