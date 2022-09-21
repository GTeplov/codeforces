#include <iostream>
#include <vector>


void bubble(std::vector <int>& a) {
    bool swapp = true;
    while(swapp){
        swapp = false;
        for (size_t i = 0; i < a.size() - 1; i++) {
            if (a[i] > a[i + 1]) {
                int x = a[i];
                a[i] = a[i + 1];
                a[i + 1] = x;
                swapp = true;
            }
        }
    }
}


int main() {
    int t = 0;
    std::cin >> t;
    while (t--) {
        std::vector <int> a;
        int n = 0, x = 0, now = 0, now1 = 0, superposition = 0, ans = 1;
        std::cin >> n >> x;
        for (int j = 0; j < n; j++) {
            std::cin >> now;
            a.push_back(now);
        }
        bubble(a);
        for (int i = 0; i < t - 1; i++) {
            if (a[i] != a[i + 1]) {
                now = a[i + 1] - a[i] - 1;
                if ((now <= x) && (now + now1 <= x) && (superposition != 0)) {
                    now1 += now;
                    superposition += a[i + 1] - a[i];
                }
                else {
                    if (now <= x) {
                        superposition = a[i + 1] - a[i] + 1;
                        now1 = now;
                    }
                }
                if (superposition > ans)
                    ans = superposition;
            }
        }
        if (ans == 1) {
            ans += x;
        }
        std::cout << ans << std::endl;
    }
}
