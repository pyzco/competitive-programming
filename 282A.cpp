/**
 * Problem: 282A
 * Link: https://codeforces.com/problemset/problem/282/A
 */

#include <iostream>
#include <string>

int main() {

    int x = 0;

    int n;
    std::cin >> n;
    std::string s;

    for (int i = 0; i < n; i++) {
        std::cin >> s;
        if (s[1] == '+') {
            x++;
        } else if (s[1] == '-') {
            x--;
        }
    }

    std::cout << x << std::endl;

    return 0;
}