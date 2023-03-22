#include <iostream>
using namespace std;

struct point{
    double x;
    double y;
};

void print(point a){
    cout << &a.x << " " << &a.y << endl;
    cout << &a;
}


int main(){
    point a;
    cin >> a.x >> a.y;
    print(a);
    return 0;
}
