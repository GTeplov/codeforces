#include <iostream>

int main() {
    int n = 0, k = 0, f = 0, t = 0, now = 0, ans = -100000000000;
    std::cin >> n >> k;
    for (int i = 0; i < n; i++) {
        std::cin >> f >> t;
        now = f;
        if (t > k) now -= (t - k);
        if (now > ans) ans = now;
    }
    std::cout << ans;
}
