/**
 * Problem: 236A
 * Link: https://codeforces.com/problemset/problem/236/A
 */

#include <iostream>
#include <vector>
#include <set>

int main() {
    std::string s;
    std::cin >> s;

    std::set<char> st;

    for (int i = 0; i < s.size(); ++i) {
        st.insert(s[i]);
    }

    if (st.size() % 2 == 0) {
        std::cout << "CHAT WITH HER!";
    } else {
        std::cout << "IGNORE HIM!";
    }

    return 0;
}
