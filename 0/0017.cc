#include <iostream>
 
using namespace std;
 
int main() {
    string s;
    while (getline(cin, s)) {
        while (true) {
            for (int i = 0; i < s.length(); ++i) {
                if (s[i] == ' ' || s[i] == '.') {
                    continue;
                }
                if (s[i] == 'z') {
                    s[i] -= 26;
                }
                ++s[i];
            }
             
            if (s.find("the") != string::npos || s.find("this") != string::npos || s.find("that") != string::npos) {
                cout << s << endl;
                break;
            }
        }
 
    }
 
    return 0;
}
