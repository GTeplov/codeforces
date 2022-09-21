#include <iostream>

int main() {
    int t = 0, n = 0, m = 0, x = 0, y = 0, d = 0;
    std::cin >> t;
    while (t--) {
        std::cin >> n >> m >> x >> y >> d;
        if (((x - d > 1) && (y + d < m)) || ((x + d < n) && (y - d > 1)))
            std::cout << (n - 1) + (m - 1) << std::endl;
        else {
            std::cout << -1 << std::endl;
        }
    }
}
