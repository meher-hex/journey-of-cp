#include <iostream>

int main() {
    int n, k;
    std::cin >> n >> k;
    int time = 240 - k; // contest lasts four hours
    int problem{0};
    for (int i = 1; i <= n; i++) {
        if (time != 0 && time >= (5*i)) {
            time -= 5*i;
            problem++;
        }
    }
    std::cout << problem;
}