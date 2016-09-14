#include <iostream>
#include <stack>
 
using namespace std;
 
int main() {
    stack<int> s;
 
    int n;
    while (cin >> n) {
        if (n == 0) {
            cout << s.top() << endl;
            s.pop();
            continue;
        }
 
        s.push(n);
    }
 
    return 0;
}
