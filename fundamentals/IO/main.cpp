#include <iostream>
#include <string>
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
    std::string Name;
    std::cout << "enter your age: ";
    std::cin.ignore();
    std::getline(std::cin,Name);
    std::cout << "User's Name: "
              << Name
              << "\n";
}