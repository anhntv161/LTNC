#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,minn=10000,maxn=-10000;
    cin >> n;
    double s=0;
    for(int i=0;i<n;i++){
        cin >> a;
        s=s+a;
        if(a>maxn) maxn=a;
        if(a<minn) minn=a;
    }
    s=s/(double(n));
    cout << "Mean: " << s << endl;
    cout << "Max: " << maxn << endl;
    cout << "Min: " << minn;
    return 0;
}

