#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int i,n=s.length();
	for(i=0;i<n/2;i++)
		if(s[i]!=s[n-1-i]){
			cout << "no";
			break;
		}
	if(i==n/2)
		cout << "yes";
	return 0;
}
