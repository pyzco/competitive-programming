/**
 * Problem: 281A
 * Link: https://codeforces.com/problemset/problem/281/A
 */

#include <iostream>
#include <string>

int main() {

    std::string s;
    std::cin >> s;

    s[0] = (char)std::toupper(s[0]);

    for (int i = 0; i < s.length(); i++) {
        std::cout << s[i];
    }

    return 0;
}