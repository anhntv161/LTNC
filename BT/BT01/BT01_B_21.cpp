#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,z;
    cin >> x >> y >> z;
    double p=(x+y+z)/2;
    cout << sqrt(p*(p-x)*(p-y)*(p-z));
    return 0;
}

