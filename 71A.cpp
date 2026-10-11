/**
* Problem: 71A
 * Link: https://codeforces.com/problemset/problem/71/A
 */

#include <iostream>
#include <string>

int main()
{
    int n;
    std::cin >> n;
    std::string s;

    for (int i = 0; i < n; i++) {
        std::cin >> s;
        int longitud = s.length();
        if (longitud > 10) {
                std::cout << s[0] << longitud - 2 << s[longitud - 1] << "\n";
        } else {
            std::cout << s << "\n";
        }

    }

    return 0;
}