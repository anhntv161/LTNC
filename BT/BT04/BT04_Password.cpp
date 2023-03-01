#include <bits/stdc++.h>
using namespace std;
int main() {
	int num;
	vector<string>str(num);
	cin >> num;
	for(int i=0;i<num;i++){
		cin>>str[i];
	}
	for(int j=0;j<num;j++){
		int x=str[j].size();
		reverse(str[j].begin(),str[j].end());
		for(int k=0;k<num;k++)
			if(str[k]==str[j])
				if(j!=k){
					cout<<str[k].size()<<" "<<str[k][x/2];
					break;
				}
	}
	return 0;
}
