#include <iostream>
#include <string>
#include <cctype> // for std::toupper()
#include <algorithm> // for std::transform()

int main() {
    int t;
    std::cin >> t;
    std::string s;
    while (t--) {
        std::cin >> s;
        std::transform(s.begin(), s.end(), s.begin(), 
                [](unsigned char c){ return static_cast<unsigned char>(std::toupper(c)); });
        if (s == "YES")
            std::cout << "YES\n";
        else 
            std::cout << "NO\n";
    }
}