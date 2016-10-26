#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    unsigned int n;
    for (int i = 1; cin >> n; ++i) {
        if (n == 0) {
            break;
        }

        vector<pair<int, int>> p(n);

        for (int j = 0; j < n; ++j) {
            cin >> p[j].first >> p[j].second;
        }

        double s = 0;
        for (int j = 0; j < n; ++j) {
            s += p[j].first * p[(j + 1) % n].second - p[(j + 1) % n].first * p[j].second;
        }

        cout << i << " " << fixed << setprecision(1) << abs(s) / 2.0 << endl;
    }

    return 0;
}
