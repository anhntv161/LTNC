#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n+1],dem[n+1]={0},j;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		dem[a[i]]++;
	}
	for(j=1;j<=n;j++)
		if(dem[j]>=2){
			cout << "yes";
			break;
		}
	if(j==n+1) cout << "no";
	return 0;
}
