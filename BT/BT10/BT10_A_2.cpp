#include <iostream>
using namespace std;

struct point{
    double x;
    double y;
};

void print_1 (point &a){
    cout << "(" << &a.x << ", " << &a.y << ")" << endl;
}

void print_2 (point a){
    cout << "(" << &a.x << ", " << &a.y << ")" << endl;
}

int main(){
    point a;
    cin >> a.x >> a.y;
    print_1 (a);
    print_2 (a);
    return 0;
}
