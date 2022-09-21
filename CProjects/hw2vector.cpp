#include <iostream>
#include <vector>


int pow(int num, int st) {
    if (st == 0) return 1;
    int a = num;
    for (int i = 1; i < st; i++)
        a *= num;
    return a;
}Ò


int main() {
    int a = 0;
    std::cin >> a;
    for (int i = 0; i < a; i++) {
        std::vector <int> data;
        int b = 0;
        std::cin >> b;
        for (int j = 0; j < 5; j++) {
            if (b % 10 != 0) {
                data.push_back((b % 10) * pow(10, j));
                b /= 10;
                if (b == b % 10) {
                    if (b != 0)
                        data.push_back(b * pow(10, j + 1));
                    break;
                }
            }
            else b /= 10;
            if (b == b % 10) {
                if (b != 0)
                    data.push_back(b * pow(10, j + 1));
                break;
            }
        }
        std::cout << data.size() << std::endl;
        for (int e = 0; e < data.size(); e++)
            std::cout << data[e] << " ";
        std::cout << std::endl;
    }
}

