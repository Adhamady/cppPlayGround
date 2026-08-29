#include <iostream>
int main()
{
    int sum = 0;
    std::cout << "numbers from 1 to 10 : " << "\n";
    for (int i = 1; i < 11; ++i)
    {
        std::cout << i << "\n";
    }
    std::cout << "even numbers from 1 to 10 : " << "\n";
    for (int i = 1; i < 11; ++i)
    {
        if (i % 2 != 0)
        {
            continue;
        }
        std::cout << i << "\n";
    }
    for (int i = 1; i < 11; ++i)
    {
        sum += i;
    }
    std::cout << "Sum of numbers from 1 to 10 : "
              << sum
              << "\n";
    int counter = 5;
    while (counter > 0)
    {

        std::cout << "Counter : "
                  << counter
                  << "\n";
        --counter;
    }
    int num = 0;
    do
    {
        std::cout << "Number : "
                  << num
                  << "\n";
        ++num;
    } while (num < 5);
    for (int i = 1; i < 11; ++i)
    {
        if (6 == i)
        {
            break;
        }
        std::cout << i << "\n";
    }
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    for (int i = 0; i < 11; ++i)
    {
        for (int j = 0; j < 11; ++j)
        {
            std::cout << i * j << "\t";
        }
        std::cout << "\n";
    }
}