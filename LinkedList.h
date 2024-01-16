#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

template <typename T>
class LinkedList {
private:
    Node<T>* head;
    Node<T>* tail;

public:
    LinkedList();
    ~LinkedList();

    void AddToHead(T value);
    void AddToTail(T value);
    void DeleteFromHead();
    void DeleteFromTail();
    void DeleteAll();
    void Show();

    // Нові функції
    void InsertAtPosition(T value, int position);
    void DeleteAtPosition(int position);
    int FindElement(T value);
    int ReplaceElement(T old_value, T new_value);
    void Reverse();
};

#endif