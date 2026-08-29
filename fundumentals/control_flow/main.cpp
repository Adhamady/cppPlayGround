#include <iostream>

int main()
{
    std::cout << "C++ Control Flow" << "\n";
    int age = 20;
    int score = 85;
    int day = 3;
    if (age >= 18)
    {
        std::cout << "Adult" << "\n";
    }
    else
    {
        std::cout << "Minor" << "\n";
    }
    if (score >= 90)
    {
        std::cout << "Grade A" << "\n";
    }
    else if (score >= 80)
    {
        std::cout << "Grade B" << "\n";
    }
    else if (score >= 70)
    {
        std::cout << "Grade C" << "\n";
    }
    else
    {
        std::cout << "Fail" << "\n";
    }
    switch (day)
    {
    case 1:
        std::cout << "Monday" << "\n";
        break;
    case 2:
        std::cout << "tuesday" << "\n";
        break;
    case 3:
        std::cout << "wednesday" << "\n";
        break;
    case 4:
        std::cout << "thursday" << "\n";
        break;
    case 5:
        std::cout << "friday" << "\n";
        break;
    case 6:
        std::cout << "saturday" << "\n";
        break;
    case 7:
        std::cout << "sunday" << "\n";
        break;
    default:
        std::cout << "Invalid day" << "\n";
        break;
    }
}