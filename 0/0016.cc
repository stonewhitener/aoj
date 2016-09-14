#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    const double PI = static_cast<double>(acos(-1.0));
 
    pair<double, double> pos = {0.0, 0.0};
    int angle = 90;
 
    int d, a;
    while (1) {
        cin >> d;
        cin.ignore();
        cin >> a;
 
        if (d == 0 && a == 0) {
            break;
        }
 
        pos.first += cos(static_cast<double>(angle) / 180.0 * PI) * d;
        pos.second += sin(static_cast<double>(angle) / 180.0 * PI) * d;
 
        angle += a;
    }
 
    cout << -static_cast<int>(pos.first) << endl << static_cast<int>(pos.second) << endl;
 
    return 0;
}
