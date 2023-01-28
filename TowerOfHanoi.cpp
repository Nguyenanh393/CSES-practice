#include<bits/stdc++.h>
 
#define ll long long
#define ld long double
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define nl '\n'
const ll md = 1e9 + 7;
 
using namespace std;
 
int n;
int count = 0;
void resHanoi(int n, char A, char B, char C) {
	
	if (n==1) {
		cout << A << " "  << C <<nl;
		return;
	}
	resHanoi (n-1, A , C, B);
	resHanoi(1,A,B,C);
	resHanoi(n-1, B, A, C);
}

int main()
{
	cin >> n;
	cout<< pow(2,n) -1<<nl;
	resHanoi(n,'1','2','3');
}