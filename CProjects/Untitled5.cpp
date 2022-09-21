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
        int n = 0, x = 0, now = 0, now1 = 0;
        bool flag = false;
        std::cin >> n >> x;
        for (int i = 0; i < n; i++) {
            std::cin >> now;
            a.push_back(now);
        }
        bubble(a);
        std::vector <int> b;
        int prev = 0;
        b.push_back(prev);
        for (int i = 0; i < n; i++) {
            if (a[i] != prev) {
                b.push_back(a[i]);
                prev = a[i];
            }
        }
        if (b.size() <= 2)
            std::cout << x + int(x >= b[b.size() - 1] - 1) << std::endl;
        else {
            now = 0;
            for (int i = 0; i < (b.size() - 1); i++) {
                now1 = b[i + 1] - b[i] - 1;
                if (now + now1 > x) {
                    std::cout << b[i] + x - now << std::endl;
                    flag = true;
                    break;
                }
                else if (i != b.size() - 1)
                    now += now1;
            }
            if (flag == false)
                std::cout << b[b.size() - 1] + x - now << std::endl;
        }
    }
}


