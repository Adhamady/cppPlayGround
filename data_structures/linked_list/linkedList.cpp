#include "linkedList.h"
#include <iostream>
LinkedList ::LinkedList() : head(nullptr)
{
}
void LinkedList::pushBack(int element)
{
    Node *newNode = new Node;

    newNode->data = element;
    newNode->next = nullptr;

    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        Node *current = head;

        while (current->next != nullptr)
        {
            current = current->next;
        }

        current->next = newNode;
    }
}
void LinkedList::print()
{
    Node *current = head;
    while (current != nullptr)
    {
        std::cout << current->data << "\t";
        current = current->next;
    }
    std::cout << "\n";
}
void LinkedList::popBack()
{
    Node *current = head;

    while (current->next->next != nullptr)
    {
        current = current->next;
    }

    delete current->next;
    current->next = nullptr;
}
