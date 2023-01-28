#include<bits/stdc++.h>
 
#define ll long long
#define ld long double
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define nl '\n'
const ll md = 1e9 + 7;
 
using namespace std;
 
string str;
 
int main()
{
	cin >> str;
	sort(str.begin(),str.end());
	unordered_map<char, int> letter;
	for(int i = 0; i < str.size(); i++) {
		letter[str[i]]++;
	}
	
	int odd = 0;
	for (auto i : letter) {
		if(i.second & 1) {
			odd++;
		}
	}
	
	vector <char> v;
	string s, rs;
	
	if (odd > 1) {
		cout << "NO SOLUTION";
	} else {
		for (auto i : letter) {
			if(i.second & 1) {
				for (int j = 1; j <= i.second; j++) {
					s += i.first;
				}
			} else {
				for (int j = 1; j <= i.second/2; j++) {
					rs += i.first;
				}
			}
		}
		string rrs = rs;
		reverse(rs.begin(),rs.end());
		cout << rrs + s + rs;
	}
    return 0;
}