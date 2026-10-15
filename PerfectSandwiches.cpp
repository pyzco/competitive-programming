/**
 * Problem: Perfect Sandwiches
 * Link: https://codeforces.com/contest/2276/problem/A
 */

#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    int a, b;
    std::vector<std::pair<int, int>> pares;

    for (int i = 0; i < n; i++) {
        std::cin >> a >> b;
        pares.emplace_back(a, b);
    }

    for (int i = 0; i < pares.size(); i++) {
        if (pares[i].first < pares[i].second) {
            std::cout << -1 << "\n";
        }
    }
    return 0;
}