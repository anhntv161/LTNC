#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n,i;
		cin >> n;
		int a[n+1];
		for(int j=1;j<=n;j++)
			cin >> a[j];
		for(i=1;i<=n;i++){
			long long s1=0,s2=0;
			for(int j=1;j<i;j++)
				s1=s1+a[j];
			for(int j=i+1;j<=n;j++)
				s2=s2+a[j];
			if(s1==s2){
				cout << "YES" << endl;
				break;
			}
		}
		if(i==n+1) cout << "NO" << endl;
	}
	return 0;
}
