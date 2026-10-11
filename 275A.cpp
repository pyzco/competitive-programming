/**
 * Problem: 275A
 * Link: https://codeforces.com/problemset/problem/275/A
 */

#include <iostream>

int main() {

    int matriz[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int presiones = matriz[i][j];
            if (i > 0) {
                presiones += matriz[i - 1][j];
            }
            if (i < 2) {
                presiones += matriz[i+1][j];
            }
            if (j > 0) {
                presiones += matriz[i][j-1];
            }
            if (j < 2) {
                presiones += matriz[i][j+1];
            }

            if (presiones % 2 == 0) {
                std::cout << 1;
            } else {
                std::cout << 0;
            }
        }
        std::cout << "\n";
    }

    return 0;
}