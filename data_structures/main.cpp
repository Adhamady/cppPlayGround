#include "dynamic_array.h"

int main()
{
    DynamicArray arr;

    arr.PushBack(10);
    arr.PushBack(20);
    arr.PushBack(30);
    arr.PopBack();
    arr.Print();

    return 0;
}