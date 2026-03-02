#include <iostream>

int main() {
    int t, n;
    std::cin >> t;
    while (t--) {
        std::cin >> n;
        if (n % 3 == 0)
            std::cout << "Second\n";
        else 
            std::cout << "First\n";
    }
}