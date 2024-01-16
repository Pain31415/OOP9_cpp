#include "LinkedList.h"
#include <iostream>

template <class T>
LinkedList<T>::LinkedList() : head(nullptr) {}

template <class T>
LinkedList<T>::~LinkedList() {
    Clear();
}

template <class T>
void LinkedList<T>::Push(const T& data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

template <class T>
void LinkedList<T>::Pop() {
    if (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

template <class T>
T LinkedList<T>::Top() const {
    if (head) {
        return head->data;
    }
    else {
        std::cerr << "Stack is empty\n";
        return T();
    }
}

template <class T>
bool LinkedList<T>::IsEmpty() const {
    return head == nullptr;
}

template <class T>
void LinkedList<T>::Clear() {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

// Explicit instantiation for int
template class LinkedList<int>;