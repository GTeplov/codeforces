#include <iostream>

int main() {
    int i = 0, j = 0, a = 0;
    for (int e = 0; e < 25; e++) {
        std::cin >> a;
        if (a == 1) {
            i = e / 5 + 1;
            j = e % 5 + 1;
            break;
        }
    }
    std::cout << abs(i - 3) + abs(j - 3);
}
