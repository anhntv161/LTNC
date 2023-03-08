#include <bits/stdc++.h>
using namespace std;

long long DecToBin(int decNumber)
{
    long long binNumber = 0;
    int p = 0;
    while (decNumber > 0)
    {
        binNumber += (decNumber % 2) * pow(10, p);
        ++p;
        decNumber /= 2;
    }
    return binNumber;
}

long long BinToDec(long long binNumber)
{
    int p = 0;
    int decNumber = 0;
    while (binNumber > 0)
    {
        decNumber += (binNumber % 10) * pow(2, p);
        ++p;
        binNumber /= 10;
    }
    return decNumber;
}

int main() {
	long long decNumber, binNumber;
    cin >> decNumber;
    cout << " doi sang he nhi phan la: " << DecToBin(decNumber) << endl;
    cin >> binNumber;
    cout << " doi sang he thap phan la: " << BinToDec(binNumber) << endl;
	return 0;
}
