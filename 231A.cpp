/**
 * Problem: 141A
 * Link: https://codeforces.com/problemset/problem/141/A
 */

#include <iostream>
#include <string>

int main() {
    std::string s1, s2, s3;
    std::cin >> s1;
    std::cin >> s2;
    std::cin >> s3;

    int frecuencia[26] = {0};

    if (s3.length() != s1.length() + s2.length()) {
        std::cout << "NO" << "\n";
        return 0;
    } else {
        for (int i = 0; i < s1.length(); i++) {
            frecuencia[s1[i] - 'A']++;
        }
        for (int i = 0; i < s2.length(); i++) {
            frecuencia[s2[i] - 'A']++;
        }
        for (int i = 0; i < s3.length(); i++) {
            frecuencia[s3[i] - 'A']--;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (frecuencia[i] != 0) {
            std::cout << "NO" << "\n";
            return 0;
        }
    }

    std::cout << "YES" << "\n";
}