#include <iostream>

int main() {
    int t = 0, n = 0, k = 0, r = 0, c = 0, now = 0, pattx = 0, patty = 0;
    std::cin >> t;
    while (t--) {
        std::cin >> n >> k >> r >> c;
        if (k == 1) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++){
                    std::cout << "X";
                }
                std::cout << std::endl;
            }
        }
        else {
            now = 0;
            pattx = (r - 1) % k;
            patty = (c - 1) % k;
            for (int i = 0; i < k; i++) {
                for (int j = 0; j < k; j++) {
                    if ((j == patty) && (i == pattx))
                        std::cout << "X";
                    else
                        if ((j == patty) || (i == pattx))
                            std::cout << ".";
                        else {
                            for (int e = 0; e < k; e++) {
                                if ((e == now) && (now != patty)) {
                                    std::cout << "X";
                                }
                                else
                                    std::cout << ".";
                            }
                            now = (now + 1) % k;
                            if (now == patty)
                                now = (now + 1) % k;
                            break;
                        }
                }
                std::cout << std::endl;
            }
        }
    }
}
