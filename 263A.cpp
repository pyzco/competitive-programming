/**
 * Problem: 263A
 * Link: https://codeforces.com/problemset/problem/263/A
 */

#include <iostream>
#include <vector>

int main() {

    std::vector<std::vector<int>> darkrai(5, std::vector<int>(5, 0));

    int positionf;
    int positionc;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cin >> darkrai[i][j];
            if (darkrai[i][j] == 1) {
                positionf = i;
                positionc = j;
            }
        }
    }

    int cont = 0;

    if (positionf < 2) {
        cont += 2 - positionf;
    } else if (positionf > 2) {
        cont += positionf - 2;
    }

    if (positionc < 2) {
        cont += 2 - positionc;
    } else if (positionc > 2) {
        cont += positionc - 2;
    }

    std::cout << cont;

    return 0;
}