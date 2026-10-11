/**
 * Problem: 69A
 * Link: https://codeforces.com/problemset/problem/69/A
 */

#include <iostream>

int main() {

    int n;
    std::cin >> n;

    int x, y, z;

    int sumax = 0;
    int sumay = 0;
    int sumaz = 0;

    for (int i = 0; i < n; i++) {
        std::cin >> x >> y >> z;
        sumax += x;
        sumay += y;
        sumaz += z;
    }

    if (sumax == 0 &&sumay == 0 && sumaz == 0) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }

    return 0;
}