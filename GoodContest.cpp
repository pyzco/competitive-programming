/**
 * Problem: Good Contest
 * Link: https://codeforces.com/contest/2266/problem/A
 */

#include <iostream>

int main() {

    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        std::cin >> n;
        int a1,a2,a3;
        std::cin >> a1 >> a2 >> a3;
        if (a1 <= a2 && a1 <= a3) {
            std::cout << n - a1 << "\n";
        } else if (a2 <= a1 && a2 <= a3) {
            std::cout << n - a2 << "\n";
        } else {
            std::cout << n - a3 << "\n";
        }
    }
    return 0;
}