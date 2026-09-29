/**
 * Problem: 32B
 * Link: https://codeforces.com/problemset/problem/32/B
 */

#include <iostream>
#include <string>

int main() {

    std::string cadena;
    std::cin >> cadena;
    std::string numero = "";

    for (int i = 0; i < cadena.size(); i++) {
        if (cadena[i] == '.') {
            numero += '0';
        } else if (cadena[i] == '-') {
            if (cadena[i + 1] == '.') {
                numero += '1';
            } else if (cadena[i + 1] == '-') {
                numero += '2';
            }
            i++;
        }
    }

    std::cout << numero;

    return 0;
}