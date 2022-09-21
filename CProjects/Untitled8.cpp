#include <iostream>

int main() {
    int t = 0, n = 0, k = 0, r = 0, c = 0, now = 0, pattx = 0, patty = 0;
    std::cin >> t;
    while (t--) {
        std::cin >> n >> k >> r >> c;
        now = 0;
        pattx = (r - 1) % k;
        patty = (c - 1) % k;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                bool flag = false;
                if (((j % k) == patty) && ((i % k) == pattx))
                    std::cout << "X";
                else
                    if (((j % k) == patty) || ((i % k) == pattx))
                        std::cout << ".";
                    else {
                        for (int e = j; e < n; e++) {
                            if ((e % k) == 0)
                                flag = false;
                            if (((e % k) >= now) && ((e % k) != patty) && (flag == false)) {
                                std::cout << "X";
                                now = e % k;
                                flag = true;
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
