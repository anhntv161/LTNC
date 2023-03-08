#include <bits/stdc++.h>
using namespace std;


int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
	int a,b;
	cin >> a >> b;
	if(gcd(a,b)==1)
		cout << a << " va " << b << " nguyen to cung nhau";
	else cout << "UCLN cua " << a << " va " << b << " la " << gcd(a,b);
  	return 0;
}
