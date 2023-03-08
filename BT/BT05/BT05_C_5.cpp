#include <bits/stdc++.h>
using namespace std;

bool checknt(int n){
	int i;
	for(i=2;i<=sqrt(n);i++)
		if(n%i==0){
			return false;
			break;
		}
	if(i==sqrt(n)+1) return true;
}

int main() {
	int n;
	cin >> n;
	for(int i=2;i<n;i++)
		if(checknt(i))
			cout << i << " ";
	return 0;
}
