#include <iostream>
#include <vector>

int main() {
    int t = 0, n = 0, now = 0;
    std::cin >> t;
    while (t--) {
        int cmax = 0, cmin = 1000;
        std::cin >> n;
        while (n--) {
            std::cin >> now;
            if (now > cmax)
                cmax = now;
            if (now < cmin)
                cmin = now;
        }
        std::cout << cmax - cmin <<std::endl;
    }
}
