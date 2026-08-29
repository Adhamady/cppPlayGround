#include <iostream>
struct Node
{
    int data;
    Node *next;
};
class LinkedList
{
private:
    Node *head;

public:
    LinkedList();
    void pushBack(int);
    void print();
    void popBack();
};