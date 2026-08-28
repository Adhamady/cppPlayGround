#include <iostream>
int main()
{
    std::cout << "--------Basic output------"
              << "\n";
    std::cout << "Hello,World!" << "\n";

    std::cout << "--------User input------"
              << "\n";
    int age;
    std::cout << "enter your age: ";
    std::cin >> age;
    std::cout << "User's age: "
              << age
              << "\n";
}