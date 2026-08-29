#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    int width;
    int length;

public:
    Rectangle();
    Rectangle(int width, int length);
    Rectangle(int side);

    int getWidth();
    int getLength();

    void setWidth(int width);
    void setLength(int length);

    int calculateArea();
};

#endif