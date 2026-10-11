// Homework 7 — Johan Zuniga
// CIS 5 Week 07 · Odd and Even

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    const int N = 20;
    int values[N];

    srand(static_cast<unsigned>(time(nullptr)));
    for (int i = 0; i < N; ++i) {
        values[i] = rand() % 100;
    }

    int evens[N];
    int odds[N];
    int evenCount = 0;
    int oddCount = 0;

    std::cout << "Original array:\n";

    for (int i = 0; i < N; ++i) {
        std::cout << "[" << i << "] " << values[i] << "\n";

        if (values[i] % 2 == 0) {
            evens[evenCount] = values[i];
            ++evenCount;
        } else {
            odds[oddCount] = values[i];
            ++oddCount;
        }
    }

    std::cout << "Even: ";
    for (int i = 0; i < evenCount; ++i) {
        std::cout << evens[i] << " ";
    }

    std::cout << "\nOdd: ";
    for (int i = 0; i < oddCount; ++i) {
        std::cout << odds[i] << " ";
    }

    std::cout << "\n";

    return 0;
}
