/**
 * Problem: 59A
 * Link: https://codeforces.com/problemset/problem/59/A
 */

#include <iostream>
#include <string>
#include <cctype>

int main() {

    int contMinus = 0;
    int contMayus = 0;

    std::string s;
    std::cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (isupper(s[i])) {
            contMayus++;
        } else {
            contMinus++;
        }
    }

    if (contMayus > contMinus) {
        for (int i = 0; i < s.length(); i++) {
            std::cout << (char)toupper(s[i]);
        }
    } else {
        for (int i = 0; i < s.length(); i++) {
            std::cout << (char)tolower(s[i]);
        }
    }

    return 0;
}