#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "Node.h"

template <typename T>
class LinkedList {
private:
    Node<T>* head;

public:
    LinkedList();
    ~LinkedList();

    void pushBack(T val);
    void display();

    LinkedList<T> clone();
    LinkedList<T> operator+(const LinkedList<T>& other);
    LinkedList<T> operator*(const LinkedList<T>& other);

    bool contains(T val) const;
};

#endif