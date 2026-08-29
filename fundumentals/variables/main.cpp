#include <iostream>
#include <string>
int main()
{
    std::cout << "C++ Data types and variables" << "\n";
    std::cout << "the int type modifiers";
    std::cout << "Short int- size : "
              << sizeof(short)
              << "\n";
    std::cout << "int- size : "
              << sizeof(int)
              << "\n";
    std::cout << "long int- size : "
              << sizeof(long)
              << "\n";
    std::cout << "Short long long- size : "
              << sizeof(long long)
              << "\n";

    unsigned int age = 18;
    double height = 185.6;
    float temp = 30.5;
    char grade = 'A';
    bool isStudent = true;
    std::string name = "Adham";
    std::cout << "Age : "
              << age
              << "\n";
    std::cout << "height : "
              << height
              << "\n";
    std::cout << "temp : "
              << temp
              << "\n";
    std::cout << "Grade : "
              << grade
              << "\n";
    std::cout << "Student : "
              << std::boolalpha
              << isStudent
              << "\n";
    const int DAYS_IN_WEEK = 7;
    std::cout << "days in week  : "
              << DAYS_IN_WEEK
              << "\n";
}