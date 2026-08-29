#include <iostream>

int main()
{
    int numbers[] = {10, 20, 30, 40, 50};
    std::size_t arraySize = sizeof(numbers) / sizeof(numbers[0]);
    std::cout << "Array first element:\t";
    std::cout << numbers[0] << "\n";
    std::cout << "Array third element:\t";
    std::cout << numbers[2] << "\n";
    std::cout << "Array last element:\t";
    std::cout << numbers[arraySize - 1] << "\n";
    // print elements in array
    std::cout << "Array elements : ";
    for (auto i : numbers)
    {
        std::cout << i
                  << "\t";
    }
    std::cout << "\n";
    int index, newValue;
    std::cout << "index u want to edit :";
    std::cin >> index;
    std::cout << "New value:";
    std::cin >> newValue;
    numbers[index] = newValue;
    std::cout << "Array elements : ";
    for (auto i : numbers)
    {
        std::cout << i
                  << "\t";
    }
    std::cout << "\n";
}