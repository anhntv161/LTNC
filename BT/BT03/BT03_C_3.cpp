#include <bits/stdc++.h>
using namespace std;

bool check(int n){
	int m=n,s=0;
	while(n>0){
		s=s*10+n%10;
		n=n/10;
	}
	if(m!=s) return false;
	else return true;
}

int main() {
	int t;
	cin >> t;
	while(t--){
		int a,b,dem=0;
		cin >> a >> b;
		for(int i=a;i<=b;i++)
			if(check(i))
				dem++;
		cout << dem << endl;
	}
	return 0;
}
