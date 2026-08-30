struct Node
{
    int data;
    Node* next;
};

class LinkedList
{
private:
    Node* head;

public:
    LinkedList();
    ~LinkedList();

    void pushBack(int);
    void print();
    void popBack();
    void popFront();
    void pushFront(int);
    bool contains(int value);
    void insertAfter(int target, int value);
    void remove(int value);

    LinkedList(const LinkedList& other);
    LinkedList& operator=(const LinkedList& other);

    LinkedList(LinkedList&& other);
    LinkedList& operator=(LinkedList&& other);
};