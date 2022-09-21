#include <iostream>
#include <vector>

int main() {
    int t = 0, n = 0;
    std::cin >> t;
    while (t--) {
        int a = 0, b = 0, c = 0;
        std::string now = "";
        std::cin >> n;
        std::vector <std::string> aw;
        std::vector <std::string> bw;
        std::vector <std::string> cw;
        for (int j = 0; j < 3; j++) {
            for (int i = 0; i < n; i++) {
                std::cin >> now;
                if (j == 0)
                    aw.push_back(now);
                if (j == 1)
                    bw.push_back(now);
                if (j == 2)
                    cw.push_back(now);
            }
        }
        for (int j = 0; j < 3; j++) {
            for (int i = 0; i < n; i ++) {
                bool flag1 = false, flag2 = false;
                if (j == 0) {
                    for (int e = 0; e < n; e++) {
                        if (bw[e] == aw[i])
                            flag1 = true;
                        if (cw[e] == aw[i])
                            flag2 = true;
                    }
                    if ((flag1 == false) && (flag2 == false))
                        a += 3;
                    else
                        if ((flag1 == true) || (flag2 == true))
                            a += 1;
                }
                if (j == 1) {
                    for (int e = 0; e < n; e++) {
                        if (aw[e] == bw[i])
                            flag1 = true;
                        if (cw[e] == bw[i])
                            flag2 = true;
                    }
                    if ((flag1 == false) && (flag2 == false))
                        b += 3;
                    else
                        if ((flag1 == true) || (flag2 == true))
                            b += 1;
                }
                if (j == 2) {
                    for (int e = 0; e < n; e++) {
                        if (bw[e] == cw[i])
                            flag1 = true;
                        if (aw[e] == cw[i])
                            flag2 = true;
                    }
                    if ((flag1 == false) && (flag2 == false))
                        c += 3;
                    else
                        if ((flag1 == true) || (flag2 == true))
                            c += 1;
                }
            }
        }
        std::cout << a << " " << b << " " << c << std::endl;
    }
}
