#include <iostream>
#include <vector>

int main() {
    int n = 0, now = 0, flag = 0;
    std::cin >> n;
    std::vector <int> a;
    for (int i = 0; i < n; i++) {
        std::cin >> now;
        a.push_back(now);
    }
    std::vector <int> b;
    for (int i = n - 1; i >= 0; i--) {
        flag = 0;
        now = a[i];
        for (int j = 0; j < b.size(); j++) {
            if (b[j] == now) {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            b.push_back(now);
    }
    std::cout << b.size() << std::endl;
    for (int i = b.size() - 1; i >= 0; i--) {
        std::cout << b[i] << " ";
    }
}
