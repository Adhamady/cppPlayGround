#include <iostream>
#include <iomanip>
#include <bitset>
int main()
{
    std::cout << "C++ Operators and Expressions" << "\n";
    int a = 10;
    int b = 3;
    bool isStudent = true;
    bool hasId = false;
    int value = 10;
    std::cout << "ARITHMETIC OPERATORS" << "\n";
    std::cout << "A + b = "
              << a + b
              << "\n";
    std::cout << "A - b = "
              << a - b
              << "\n";
    std::cout << "A * b = "
              << a * b
              << "\n";
    std::cout << "A / b = "
              << std::fixed
              << std::setprecision(2)
              << static_cast<double>(a) / b
              << "\n";
    std::cout << "COMPARISON OPERATORS" << "\n";
    std::cout << std::boolalpha;
    std::cout << "Is A grater than B : "
              << (a > b)
              << "\n";
    std::cout << "Is B grater than or equal to B : "
              << (b >= a)
              << "\n";
    std::cout << "Is A smaller than or equal B : "
              << (a <= b)
              << "\n";
    std::cout << "Is B smaller than  A : "
              << (b < a)
              << "\n";
    std::cout << "Is A equal to  A : "
              << (a == a)
              << "\n";

    std::cout << "LOGICAL OPERATORS" << "\n";
    std::cout << "is he a student with ID: "
              << (isStudent && hasId)
              << "\n";
    std::cout << "Does he have an ID or at least a student: "
              << (isStudent || hasId)
              << "\n";
    std::cout << "he is not a student: "
              << !(isStudent)
              << "\n";
    std::cout << "ASSIGNMENT OPERATORS" << "\n";
    std::cout << "increment value by 5 old value : "
              << value
              << "\t"
              << "new value: "
              << (value += 5)
              << "\a\n";
    std::cout << "decrement value by 3 old value : "
              << value
              << "\t"
              << "new value: "
              << (value -= 3)
              << "\a\n";
    std::cout << "doubling the value  old value : "
              << value
              << "\t"
              << "new value: "
              << (value *= 2)
              << "\a\n";
    std::cout << "1/4 of the value  old value : "
              << value
              << "\t"
              << "new value: "
              << (value /= 4)
              << "\a\n";
    std::cout << "remaning of the value  /4 value : "
              << value
              << "\t"
              << "new value: "
              << (value %= 4)
              << "\a\n";
    std::cout << "post increment : "
              << (value++)
              << "\a\n"
              << value
              << "\a\n";
    std::cout << "pre increment : "
              << (++value)
              << "\a\n"
              << value
              << "\a\n";
    std::cout << "CONDITION OPERATORS" << "\n";
    int max = (a > b) ? a : b;
    std::cout << "Maximum value between A and B: " << max << '\n';

    std::cout << "BITWISE OPERATORS" << "\n";

    int x = 5; // 00000101
    int y = 3; // 00000011

    std::cout << "x = "
              << x
              << " = "
              << std::bitset<8>(x)
              << "\n";

    std::cout << "y = "
              << y
              << " = "
              << std::bitset<8>(y)
              << "\n";

    std::cout << "x & y = "
              << (x & y)
              << " = "
              << std::bitset<8>(x & y)
              << "\n";

    std::cout << "x | y = "
              << (x | y)
              << " = "
              << std::bitset<8>(x | y)
              << "\n";

    std::cout << "x ^ y = "
              << (x ^ y)
              << " = "
              << std::bitset<8>(x ^ y)
              << "\n";

    std::cout << "~x = "
              << (~x)
              << " = "
              << std::bitset<8>(x)
              << " inverted: "
              << std::bitset<8>(~x)
              << "\n";

    std::cout << "x << 1 = "
              << (x << 1)
              << " = "
              << std::bitset<8>(x << 1)
              << "\n";

    std::cout << "x >> 1 = "
              << (x >> 1)
              << " = "
              << std::bitset<8>(x >> 1)
              << "\n";
}
