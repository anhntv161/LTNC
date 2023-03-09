#include<bits/stdc++.h>
using namespace std;

int binary_search(int *A, int sizeA, int target) {
    int lo = 1, hi = sizeA;
    while (lo <= hi) {
        int mid = lo + (hi - lo)/2;
        if (*(A+mid) == target)
            return mid;
        else if (*(A+mid) < target)
            lo = mid+1;
        else
            hi = mid-1;
    }
    return -1;
}

int main(){
    int n,k;
    cin >> n >> k;
    int *a = new int[n];
    for(int i=0;i<n;i++)
        cin >> *(a+i);
    cout << binary_search(a,n,k);
    return 0;
}
