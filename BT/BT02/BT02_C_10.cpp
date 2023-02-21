#include <bits/stdc++.h>
using namespace std;

int main() {
	cout << "Fahrenheit    Celsius    Absolute Value" << endl;
	cout << endl;
	for(int i=0;i<=300;i+=20){
		double c=(double(i)-32)*5/9;
		double k=c+273.15;
		cout << fixed << setprecision(2);
		cout << "  " << i << "          " << c << "       " << k << endl;
	}
	return 0;
}

