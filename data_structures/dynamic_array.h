#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

#include <cstddef>

class DynamicArray
{
private:
    int* data;
    std::size_t size;
    std::size_t capacity;

public:
    DynamicArray();

    void PushBack(int element);
    void Print();
    void PopBack();
};

#endif