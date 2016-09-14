#include <iostream>
#include <array>
 
using namespace std;
 
class point {
public:
    double x, y;
    double operator*(const point &p) const;
    point operator-(const point &p) const;
};
 
double point::operator*(const point &p) const {
    return this->x * p.y - this->y * p.x;
}
 
point point::operator-(const point &p) const {
    point r;
    r.x = this->x - p.x;
    r.y = this->y - p.y;
    return r;
}
 
int main() {
    array<point, 4> p;
    while (cin >> p[0].x >> p[0].y >> p[1].x >> p[1].y >> p[2].x >> p[2].y >> p[3].x >> p[3].y) {
        double c0 = (p[2] - p[0]) * (p[0] - p[3]);
        double c1 = (p[0] - p[1]) * (p[1] - p[3]);
        double c2 = (p[1] - p[2]) * (p[2] - p[3]);
 
        if ((c0 > 0 && c1 > 0 && c2 > 0) || (c0 < 0 && c1 < 0 && c2 < 0)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
 
    return 0;
}
