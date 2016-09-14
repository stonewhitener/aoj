#include <iostream>
#include <array>
 
using namespace std;
 
int main() {
    const int N = 1000000;
 
    array<int, N> count_array;
    array<bool, N> search_array;
 
    search_array.fill(true);
    search_array[0] = false;
    search_array[1] = false;
 
    for (int i = 2; i < search_array.size(); ++i) {
        // Sieve of Eratosthenes
        if (search_array[i]) {
            for (int j = 2; i * j < search_array.size(); ++j) {
                search_array[i * j] = false;
            }
        }
 
        // count prime numbers
        count_array[i] = count_array[i - 1] + search_array[i];
    }
 
    int n;
    while (cin >> n) {
        cout << count_array[n] << endl;
    }
 
    return 0;
}
