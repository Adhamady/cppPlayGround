#include "dynamic_array.h"
int main()
{
    DynamicArray arr;

    arr.PushBack(10);
    arr.PushBack(20);
    arr.PushBack(30);
    arr.PushBack(40);
    arr.PushBack(50);

    arr.Print();

    arr.PopBack();
    arr.PopBack();
    arr.PopBack();

    arr.Print();

    return 0;
}