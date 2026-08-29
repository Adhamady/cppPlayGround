#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

#include <cstddef>

class DynamicArray
{
private:
    int* data;
    std::size_t size;
    std::size_t capacity;

    void Grow();
    void Shrink();

public:
    DynamicArray();
    ~DynamicArray();

    void PushBack(int element);
    void PopBack();
    void Print();
};

#endif