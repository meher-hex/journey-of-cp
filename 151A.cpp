#include <iostream>

int main() {
    int n, k, l, c, d, p, nl, np;
    std::cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int drink = k * l;
    int d_toast = drink / nl;
    int l_toast = c * d;
    int s_toast = p / np;

    int min_toast{0};

    if (d_toast < l_toast) {
        if (d_toast < s_toast)
            min_toast = d_toast;
        else 
            min_toast = s_toast;
    } else {
        if (l_toast < s_toast)
            min_toast = l_toast;
        else 
            min_toast = s_toast;
    }

    int ans = min_toast / n;

    std::cout << ans << '\n';
}