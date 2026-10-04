/**
 * Problem: 61A
 * Link: https://codeforces.com/problemset/problem/61/A
 */

#include <iostream>
#include <string>

int main() {

    std::string s1;
    std::string s2;
    std::string s3 = "";

    std::cin >> s1;
    std::cin >> s2;

    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] != s2[i]) {
            s3 += "1";
        } else {
            s3 += "0";
        }
    }

    std::cout << s3;

    return 0;
}