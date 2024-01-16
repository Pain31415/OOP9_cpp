#ifndef LINKEDLIST_H
#define LINKEDLIST_H

template <class T>
class LinkedList {
private:
    struct Node {
        T data;
        Node* next;
        Node(const T& value) : data(value), next(nullptr) {}
    };

    Node* head;

public:
    LinkedList();
    ~LinkedList();

    void Push(const T& data);
    void Pop();
    T Top() const;
    bool IsEmpty() const;
    void Clear();
};

#endif // LINKEDLIST_H