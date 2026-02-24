#include <iostream>
#include <vector>

int main() {
    int n, amazing{0};
    std::cin >> n;

    std::vector<int> c(n);
    for (int i = 0; i < n; ++i)
        std::cin >> c[i];

    int best = c[0];
    int worst = c[0];

    for (int i = 0; i < n; ++i) {
        int x = c[i];
        if (x > best) {
            amazing++;
            best = x;
        }
        else if (x < worst) {
            amazing++;
            worst = x;
        }
    }

    std::cout << amazing << '\n';
}