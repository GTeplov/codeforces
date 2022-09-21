#include <iostream>
#include <array>
#include <vector>

int main() {
    int q = 0, n = 0;
    int now = 0;
    std::array <char, 26> abc = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
                                 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
                                 'u', 'v', 'w', 'x', 'y', 'z'};
    std::cin >> q;
    for (int i = 0; i < q; i++) {
        std::cin >> n;
        std::vector <char> word;
        std::cin >> now;
        while (now != 0) {
            if (now % 10 != 0) {
                word.push_back(abc[now % 10 - 1]);
                now /= 10;
            }
            else {
                word.push_back(abc[(now % 1000) / 10 - 1]);
                now /= 1000;
            }
        }
        for (int j = word.size() - 1; j >= 0; j--)
            std::cout << word[j];
        std::cout << std::endl;
    }
}
