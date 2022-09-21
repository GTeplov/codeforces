#include <iostream>
#include <vector>


int pow(int num, int st) {
    if (st == 0) return 1;
    int a = num;
    for (int i = 1; i < st; i++)
        a *= num;
    return a;
}


int main() {
    vector <int> data;
    int a = 0;
    std::cin >> a;
    for (int i = 0; i < a; i++) {
        int b = 0;
        std::cin >> b;
        for (int j = 0; j < 5; j++) {
            if (b % 10 != 0) {
                std::cout << (b % 10) * pow(10, j) << " ";
                b /= 10;
                if (b == b % 10) {
                    if (b != 0)
                        std::cout << b * pow(10, j + 1);
                    std::cout << std::endl;
                    break;
                }
            }
            else b /= 10;
            if (b == b % 10) {
                if (b != 0)
                    std::cout << b * pow(10, j + 1);
                std::cout << std::endl;
                break;
            }
        }
    }
}
