#include "linkedList.h"
#include <iostream>
LinkedList ::LinkedList() : head(nullptr)
{
}
LinkedList::~LinkedList()
{
    Node *current = head;

    while (current != nullptr)
    {
        Node *next = current->next;
        delete current;
        current = next;
    }
}
LinkedList::LinkedList(const LinkedList &other)
    : head(nullptr)
{
    Node *current = other.head;
    Node *newCurrent = nullptr;

    while (current != nullptr)
    {
        Node *newNode = new Node;

        newNode->data = current->data;
        newNode->next = nullptr;

        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            newCurrent->next = newNode;
        }

        newCurrent = newNode;
        current = current->next;
    }
}
LinkedList &LinkedList::operator=(const LinkedList &other)
{
    if (this == &other)
    {
        return *this;
    }

    // Delete current nodes
    Node *current = head;

    while (current != nullptr)
    {
        Node *next = current->next;
        delete current;
        current = next;
    }

    head = nullptr;

    // Deep copy other
    current = other.head;
    Node *newCurrent = nullptr;

    while (current != nullptr)
    {
        Node *newNode = new Node;

        newNode->data = current->data;
        newNode->next = nullptr;

        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            newCurrent->next = newNode;
        }

        newCurrent = newNode;
        current = current->next;
    }

    return *this;
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
LinkedList& LinkedList::operator=(LinkedList&& other)
{
    if (this == &other)
    {
        return *this;
    }

    // Delete our current nodes
    Node* current = head;

    while (current != nullptr)
    {
        Node* next = current->next;
        delete current;
        current = next;
    }

    // Take ownership of other's nodes
    head = other.head;

    // Leave other empty
    other.head = nullptr;

    return *this;
}
LinkedList::LinkedList(LinkedList&& other)
    : head(other.head)
{
    other.head = nullptr;
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
    if (head == nullptr)
        return;
    if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
        return;
    }
    while (current->next->next != nullptr)
    {
        current = current->next;
    }

    delete current->next;
    current->next = nullptr;
}
void LinkedList::popFront()
{
    if (head == nullptr)
        return;
    if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
        return;
    }
    Node *oldHead = head;
    head = head->next;
    delete oldHead;
}
void LinkedList ::pushFront(int value)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}
bool LinkedList ::contains(int value)
{
    if (head == nullptr)
    {
        return false;
    }
    Node *current = head;
    while (current != nullptr)
    {
        if (current->data == value)
        {
            return true;
        }
        current = current->next;
    }
    return false;
}
void LinkedList::insertAfter(int target, int value)
{
    if (head == nullptr)
    {
        return;
    }
    Node *current = head;
    while (current != nullptr)
    {
        if (current->data == target)
        {
            Node *newNode = new Node;
            newNode->data = value;
            newNode->next = current->next;
            current->next = newNode;
            return;
        }
        current = current->next;
    }
    return;
}
void LinkedList::remove(int value)
{
    if (head == nullptr)
        return;

    // Target is the head
    if (head->data == value)
    {
        Node *oldNode = head;
        head = head->next;
        delete oldNode;
        return;
    }

    // Target is somewhere after head
    Node *current = head;

    while (current->next != nullptr)
    {
        if (current->next->data == value)
        {
            Node *oldNode = current->next;

            current->next = oldNode->next;

            delete oldNode;
            return;
        }

        current = current->next;
    }
}