#include <iostream>
#include "rect.h"

int main()
{
    Rectangle r1;
    Rectangle r2(10, 20);
    Rectangle r3(10);

    std::cout << r1.calculateArea() << '\n';
    std::cout << r2.calculateArea() << '\n';
    std::cout << r3.calculateArea() << '\n';
}