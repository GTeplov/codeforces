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
        for (int i = 0; i < n; i++) {
            std::cin >> now;
            a.push_back(now);
        }
        bubble(a);
        std::vector <int> b;
        int prev = a[0];
        b.push_back(a[0]);
        for (int i = 0; i < n; i++) {
            if (a[i] != prev) {
                b.push_back(a[i]);
                prev = a[i];
            }
        }
        for (int i = 0; i < b.size() - 1; i++) {
            now += b[i + 1] - b[i] - 1;
            if (now < x)
                std::cout << b[i] + now - (b[i + 1] - b[i] - 1) << std::endl;
        }
    }
}
