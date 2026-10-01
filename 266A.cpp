/**
 * Problem: 266A
 * Link: https://codeforces.com/problemset/problem/266/A
 */

#include <iostream>
#include <string>

int main() {

    int n;
    std::cin >> n;

    std::string s;
    std::cin >> s;

    int cont = 0;

    for (int i = 0; i < n-1; i++) {
        if (s[i] == s[i+1]) {
            cont++;
        }
    }

    std::cout << cont;

    return 0;
}