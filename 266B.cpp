/**
 * Problem: 266B
 * Link: https://codeforces.com/problemset/problem/266/B
 */

#include <iostream>
#include <string>

int main() {

    int n;
    std::cin >> n;

    int t;
    std::cin >> t;

    std::string s;
    char temp;

    for (int i = 0; i < n; i++) {
        std::cin >> temp;
        s += temp;
    }

    for (int j = 0; j < t; j++) {
        for (int i = 0; i < n-1; i++) {
            if (s[i] == 'B' && s[i + 1] == 'G') {
                s[i] = 'G';
                s[i + 1] = 'B';
                i++;
            }
        }
    }

    std::cout << s;
    return 0;
}