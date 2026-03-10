#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> cards(n);
    for (int &x : cards)
        std::cin >> x;

    int s{0}, d{0};
    int left = 0, right = n - 1;
    bool sereja_turn = true;

    while (left <= right) {
        int chosen;

        if (cards[left] > cards[right]) {
            chosen = cards[left];
            left++;
        } else {
            chosen = cards[right];
            right--;
        }

        if (sereja_turn)
            s += chosen;
        else
            d += chosen;

        sereja_turn = !sereja_turn;
    }

    std::cout << s << " " << d;
}