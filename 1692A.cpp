#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;

    int a, b, c, d;
    while (t--) {
        std::cin >> a >> b >> c >> d;
        
        int p = 0;
        if (b > a)
            p++;
        if (c > a)
            p++;
        if (d > a)
            p++;

        std::cout << p << std::endl;
    }
}