/**
 * Problem: 80A
 * Link: https://codeforces.com/problemset/problem/80/A
 */

#include <iostream>

int main() {

    int n, m;
    std::cin >> n >> m;

    for (int i = n + 1; i <= m; i++) {
        bool esPrimo = true;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                esPrimo = false;
                break;
            }
        }

        if (esPrimo) {
            if (i == m) {
                std::cout << "YES";
            } else {
                std::cout << "NO";
            }
            return 0;
        }
    }

    std::cout << "NO";
    return 0;
}