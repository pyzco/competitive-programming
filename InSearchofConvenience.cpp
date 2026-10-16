/**
 * Problem: In Search of Convenience
 * Link: https://codeforces.com/contest/2275/problem/A
 */

#include <iostream>

int main() {

    int t;
    std::cin >> t;
    int x,y,R;

    for (int i = 0; i < t; i++) {
        std::cin >> x >> y >> R;
        std::cout << x - R << " " << y << "\n";
    }

    return 0;
}