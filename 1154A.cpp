#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v(4);
    for (int i = 0; i < 4; ++i)
        std::cin >> v[i];

    std::vector<int>::iterator max_it = std::max_element(v.begin(), v.end());
    int max_value = *max_it;

    std::vector<int> a;

    for (int i = 0; i < 4; ++i) {
        int p = v[i];
        if (p != max_value) {
            int x = max_value - p;
            a.push_back(x);
        }
    }

    for (int i = 0; i < 3; ++i) {
        std::cout << a[i] << " ";
    }
}