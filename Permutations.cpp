#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int n;
int main ()
{
	cin>> n;
	if (n<=3 && n!=1) cout << "NO SOLUTION";
	else {
		int i = 1, j = 2;
		
		while (j<=n)
		{
			cout<< j <<" ";
			j +=2;
		}
		
		while (i<=n)
		{
			cout<< i<<" ";
			i+=2;
		}
	}
}