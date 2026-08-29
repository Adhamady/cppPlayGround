#include <iostream>

int main()
{
    int x = 10;
    int y = 50;
    int *p = &x;
    std::cout << "X: "
              << x
              << "\tValue inside p :  "
              << p
              << "\tValue pointed to by p :  "
              << *p
              << "\n";
    *p = 20;
    std::cout << "X: "
              << x
              << "\tValue inside p :  "
              << p
              << "\tValue pointed to by p :  "
              << *p
              << "\n";
    p = &y;
    std::cout << "Y: "
              << y
              << "\tValue inside p :  "
              << p
              << "\tValue pointed to by p :  "
              << *p
              << "\n";
    int *q = nullptr;
    if (q == nullptr)
    {
        std::cout
            << "q is null \n";
    }
    else
    {
        std::cout
            << "q : "
            << q
            << "\n";
    }
    std::cout
        << "-------------6. POINTER SIZE--------"
        << "\n";
    std::cout << "Size of P : "
              << sizeof(p)
              << " bytes"
              << "\n";
    std::cout << "Size of Q : "
              << sizeof(q)
              << " bytes"
              << "\n";
    int numbers[] = {10, 20, 30, 40, 50};
    std::size_t arrSize = sizeof(numbers) / sizeof(numbers[0]);
    int *parr;
    parr = numbers;
    /*
    address of numbers[0]
    value stored in p
    value pointed to by p
    */
    std::cout << "address of numbers: "
              << parr
              << "\t"
              << "value stored in p: "
              << parr
              << "\t"
              << "value pointed to by p: "
              << *parr
              << "\n";
    std::cout << "Current value: "
              << *parr
              << "\n";

    ++parr;

    std::cout << "After parr++: "
              << *parr
              << "\n";

    ++parr;

    std::cout << "After parr++: "
              << *parr
              << "\n";

    --parr;

    std::cout << "After parr--: "
              << *parr
              << "\n";
    --parr;
    for (std::size_t i = 0; i < arrSize; ++i)
    {
        std::cout << "Value at index :  "
                  << i
                  << " = "
                  << *(parr + i)
                  << "\n";
    }
    int z = 10;
    int *pz = &z;
    int **ppz = &pz;
    std::cout << "Z : "
              << z
              << "\t  value pointed by pz "
              << *pz
              << "\t  value pointed by pointer pointed to by ppz "
              << **ppz
              << "\n";
    std::cout << "Address of Z : "
              << &z
              << "\t  address stored at pz "
              << pz
              << "\t  address of pz "
              << &pz
              << "\t  address stored at ppz "
              << ppz
              << "\n";
    **ppz = 50;
    std::cout << "Z : "
              << z
              << "\t  value pointed by pz "
              << *pz
              << "\t  value pointed by pointer pointed to by ppz "
              << **ppz
              << "\n";
    *ppz = &y;
    std::cout << "z: " << z << '\n';
    std::cout << "y: " << y << '\n';
    std::cout << "*pz: " << *pz << '\n';
    std::cout << "**ppz: " << **ppz << '\n';
}