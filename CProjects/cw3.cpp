#include <iostream>
#include <vector>

int main() {
    int n = 0, now = 0, c = 0;
    std::cin >> n;
    std::vector <int> a;
    std::vector <int> b;
    b.resize(50);
    for (int i = 0; i < n; i++) {
        std::cin >> now;
        a.push_back(now);
        b[now] += 1;
    }
    for (int i = 0; i < n; i++) {
        if (b[a[i]] == 0)
            std::cout << a[i] << " ";
        else
            b[a[i]] -= 1;
    }
}
