#include <iostream>
using namespace std;

struct point{
    double x;
    double y;
};

point mid_point( point a,  point b){
    point mid;
    mid.x=(a.x+b.x)/2;
    mid.y=(a.y+b.y)/2;
    return mid;
}

int main(){
    point a,b;
    cin >> a.x >> a.y >> b.x >> b.y;
    point mid = mid_point(a,b);
    cout << mid.x<<" "<<mid.y;
    return 0;
}
