/**
 * Problem: 339A
 * Link: https://codeforces.com/problemset/problem/339/A
 */

#include <iostream>
#include <algorithm>
#include <vector>


int main() {

    std::string s;
    std::cin >> s;
    std::vector<char> caracteres;
    std::vector<int> digitos;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '+') {
            caracteres.push_back(s[i]);
        }
    }

    for (int i = 0; i < caracteres.size(); i++) {
        int digito = caracteres[i] - '0';
        digitos.push_back(digito);
    }

    std::sort(digitos.begin(), digitos.end());

    for (int i = 0; i < digitos.size(); i++) {
        if (i != digitos.size() - 1) {
            std::cout << digitos[i] << "+";
        } else {
            std::cout << digitos[i];
        }
    }

    return 0;
}