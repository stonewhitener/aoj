#include <iostream>
 
using namespace std;
 
int main() {
    int d;
    while (cin >> d) {
        int s = 0;
        for (int x = 0; x < 600; x += d) {
            s += x * x * d;
        }
        cout << s << endl;
    }
 
    return 0;
}
