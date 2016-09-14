#include <iostream>
 
using namespace std;
 
struct big_int {
    static const int CAPACITY = 80;
    int digits[CAPACITY] = {0};
 
    big_int() {}
    big_int(const string &s) {
        if (s.length() > this->size()) {
            throw overflow_error("overflow");
        }
        for (int i = 0; i < s.length(); ++i) {
            // convert the character to integer
            digits[i] = (s[s.length() - 1 - i] - '0') % 10;
        }
    }
 
    static size_t size() {
        return CAPACITY;
    }
 
    big_int operator+(const big_int &rhs) {
        big_int r;
        bool carry = 0;
        for (int i = 0; i < r.size(); ++i) {
            int t = this->digits[i] + rhs.digits[i] + carry;
            carry = (t / 10) > 0;
            r.digits[i] = t % 10;
            if (carry == 1 && i == r.size() - 1) {
                throw overflow_error("overflow");
            }
        }
        return r;
    }
};
 
ostream& operator<<(ostream &o, const big_int &a) {
    bool skip = true;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a.digits[a.size() - 1 - i] != 0 || i == a.size() - 1) {
            skip = false;
        }
        if (!skip) {
            o << a.digits[a.size() - 1 - i];
        }
    }
    return o;
}
 
int main() {
    int n;
    cin >> n;
 
    for (int i = 0; i < n; ++i) {
        try {
            string str_a, str_b;
            cin >> str_a >> str_b;
            big_int a(str_a), b(str_b);
            cout << a + b << endl;
        } catch (const overflow_error& e) {
            std::cout << e.what() << endl;
        }
    }
 
    return 0;
}
