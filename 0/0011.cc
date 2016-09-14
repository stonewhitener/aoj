#include <iostream>
#include <vector>
#include <numeric>
 
using namespace std;
 
int main() {
    int w, n;
    cin >> w;
    cin >> n;
 
    vector<int> l(w);
    iota(l.begin(), l.end(), 1);
 
    for (int i = 0; i < n; ++i) {
        pair<int, int> p;
        char c;
        cin >> p.first >> c >> p.second;
        iter_swap(l.begin() + p.first - 1, l.begin() + p.second - 1);
    }
 
    for (auto e : l) {
        cout << e << endl;
    }
 
    return 0;
}
