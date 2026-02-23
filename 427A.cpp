#include <iostream>
#include <vector> // for std::vector

int main() {
    int n, police{0}, crime{0}; // initially no. of police and crime are 0
    std::cin >> n; // taking no. of events as input

    std::vector<int> event(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> event[i]; // taking events as input
        int x = event[i];
        if (x != -1) // recruiting event
            police += x;
        else if (x == -1) {
            if (police != 0)
                police += x; 
                // if there were 4 police officers before the crime occurred, then the no. will come down to 3, and if the next 3 elements are also -1, then the no. of police members comes down to 0. hence, if more crimes occur without having enough officers, there will be an increase in untreated crimes.
            else 
                crime++;
        }
    }
    std::cout << crime << '\n';
    // keep in mind that this code 'ignores' crimes that would be attended by police. 'crime' refers to the untreated ones only.
    return 0;
}