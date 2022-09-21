#include <iostream>
#include <vector>


void bubble(std::vector <int>& a)
{
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
    int t = 0, now = 0;
    std::vector <int> a;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        std::cin >> now;
        a.push_back(now);
    }
    bubble(a);
    for (int i = 0; i < t; i++) {
        std::cout << a[i] << " ";
    }
}
