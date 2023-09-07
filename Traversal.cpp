#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 0;

    std::cout << "Numbers:";
    for (int x : numbers) {
        std::cout << " " << x << std::endl;
        n += x;
    }
    std::cout << "Sum of all numbers: " << n << std::endl;

    int total = numbers[1] + numbers[5];
    std::cout << "numbers[1] = " << numbers[1] << ", numbers[5] = " << numbers[5] << std::endl;
    std::cout << "Total: " << total << std::endl;

    return 0;
}

