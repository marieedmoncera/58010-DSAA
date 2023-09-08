#include <iostream>
#include <vector>

int main() {
    std::vector<double> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int x;
    int y;
    std::cout<<"Put a number to insert:";
    std::cin>>x;
    std::cout<<"What index should you put it in:";
    std::cin>>y;
    double insertItem = x;
    int indexValue = y;

    if (indexValue >= 0 && indexValue <= numbers.size()) {
        numbers.insert(numbers.begin() + indexValue, insertItem);
    } else {
        std::cout << "Cannot do assigned task" << std::endl;
    }

    std::cout << "Numbers:";
    for (double num : numbers) {
        std::cout << " " << num;
    }
    std::cout << std::endl;

    return 0;
}

