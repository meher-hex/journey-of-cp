#include <iostream>

int main() {
    int k, r;
    std::cin >> k >> r;
    int shovel = 0;
    for (int i = 1;; i++) {
        int temp = k * i;
        int last_digit = temp % 10;
        if (last_digit == 0 || last_digit == r) {
            shovel = i;
            break;
        }
        temp += k*i;
    }
    std::cout << shovel;
}