/**
 * Problem: 4A
 * Link: https://codeforces.com/problemset/problem/4/A
 */

#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if (n == 0) {
        std::cout << "NO";
        return 0;
    }
    if (n == 1) {
        std::cout << "NO";
        return 0;
    }
    if (n == 2) {
        std::cout << "NO";
        return 0;
    }
    if (n % 2 == 0) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
        return 0;
    }

    return 0;
}