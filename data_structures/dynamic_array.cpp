#include "dynamic_array.h"
#include <iostream>
DynamicArray::DynamicArray()
{
    data = nullptr;
    size = 0;
    capacity = 0;
}

DynamicArray::~DynamicArray()
{
    delete[] data;
}

DynamicArray::DynamicArray(const DynamicArray &other)
{
    size = other.size;
    capacity = other.capacity;

    data = new int[capacity];

    for (std::size_t i = 0; i < size; ++i)
        data[i] = other.data[i];
}

DynamicArray &DynamicArray::operator=(const DynamicArray &other)
{
    if (this == &other)
        return *this;

    delete[] data;

    size = other.size;
    capacity = other.capacity;

    data = new int[capacity];

    for (std::size_t i = 0; i < size; ++i)
        data[i] = other.data[i];

    return *this;
}

void DynamicArray::Grow()
{
    std::size_t newCapacity;

    if (capacity == 0)
        newCapacity = 1;
    else
        newCapacity = capacity * 2;

    int *newdata = new int[newCapacity];

    for (std::size_t i = 0; i < size; ++i)
        newdata[i] = data[i];

    delete[] data;

    data = newdata;
    capacity = newCapacity;
}

void DynamicArray::Shrink()
{
    std::size_t newCapacity = capacity / 2;

    int *newdata = new int[newCapacity];

    for (std::size_t i = 0; i < size; ++i)
        newdata[i] = data[i];

    delete[] data;

    data = newdata;
    capacity = newCapacity;
}

void DynamicArray::PushBack(int element)
{
    if (size == capacity)
        Grow();

    data[size] = element;
    ++size;
}

void DynamicArray::PopBack()
{
    if (size == 0)
        return;

    --size;

    if (size <= capacity / 4 && capacity > 1)
        Shrink();
}

void DynamicArray::Print()
{
    for (std::size_t i = 0; i < size; ++i)
    {
        std::cout << "element "
                  << i
                  << " : "
                  << *(data + i)
                  << '\n';
    }
}