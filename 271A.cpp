/**
 * Problem: 271A
 * Link: https://codeforces.com/problemset/problem/271/A
 */

#include <iostream>
#include <string>

int main() {

    int y;
    std::cin >> y;
    bool encontrado = false;

    while (!encontrado) {
        y++;
        std::string copia = std::to_string(y);
        if (copia[0] != copia[1] && copia[0] != copia[2] && copia[0] != copia[3] && copia[1] != copia[2] && copia[1] != copia[3] && copia[2] != copia[3]) {
            encontrado = true;
        }
    }

    std::cout << y;

    return 0;
}