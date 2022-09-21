#include <iostream>
#include <array>
#include <vector>
#include <string>

int main() {
    int q = 0, n = 0;
    std::string now = "";
    std::array <char, 26> abc = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
                                 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
                                 'u', 'v', 'w', 'x', 'y', 'z'};
    std::cin >> q;
    for (int i = 0; i < q; i++) {
        std::cin >> n;
        std::vector <char> word;
        std::cin >> now;
        while (now.size() > 0) {
            if (now[now.size() - 1] != '0') {
                word.push_back(abc[(int)(now[now.size() - 1]) - 48 - 1]);
                now = now.substr(0, now.size() - 1);
            }
            else {
                word.push_back(abc[std::stoi(now.substr(now.size() - 3, 2)) - 1]);
                now = now.substr(0, now.size() - 3);
            }
        }
        for (int j = word.size() - 1; j >= 0; j--)
            std::cout << word[j];
        std::cout << std::endl;
    }
}
