#include "rect.h"

Rectangle::Rectangle()
    : width(0), length(0)
{
}

Rectangle::Rectangle(int width, int length)
    : width(width), length(length)
{
}

Rectangle::Rectangle(int side)
    : width(side), length(side)
{
}

int Rectangle::getWidth()
{
    return width;
}

int Rectangle::getLength()
{
    return length;
}

void Rectangle::setWidth(int width)
{
    this->width = width;
}

void Rectangle::setLength(int length)
{
    this->length = length;
}

int Rectangle::calculateArea()
{
    return width * length;
}