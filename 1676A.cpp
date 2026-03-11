#include <iostream>
#include <string>

int main() {
    int t;
    std::cin >> t;

    std::string s;

    while (t--) {
        std::cin >> s;
        int first_sum = 0, last_sum = 0;

        for (int i = 0; i < s.size(); i++){
            if (i <= 2)
                first_sum += s[i];
            else 
                last_sum += s[i];
        }

        if (first_sum == last_sum)
                std::cout << "YES\n";
                
        else 
            std::cout << "NO\n";
    }
}