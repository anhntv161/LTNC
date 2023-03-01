#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n+1],b[n+2],dem[1000]={0};
	for(int i=0;i<n;i++){
		cin >> a[i];
		dem[a[i]]++;
	}
	for(int i=0;i<n+1;i++)
		cin >> b[i];
	for(int i=0;i<n+1;i++)
		if(dem[b[i]]==0){
			cout << b[i];
			break;
		}
	return 0;
}
