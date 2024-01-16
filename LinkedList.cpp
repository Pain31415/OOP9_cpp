#include "LinkedList.h"
#include <iostream>

using namespace std;

template <typename T>
LinkedList<T>::LinkedList() : head(nullptr) {}

template <typename T>
LinkedList<T>::~LinkedList() {
    while (head) {
        Node<T>* temp = head;
        head = head->next;
        delete temp;
    }
}

template <typename T>
void LinkedList<T>::pushBack(T val) {
    Node<T>* newNode = new Node<T>(val);

    if (!head) {
        head = newNode;
        return;
    }

    Node<T>* current = head;
    while (current->next) {
        current = current->next;
    }

    current->next = newNode;
}

template <typename T>
void LinkedList<T>::display() {
    Node<T>* current = head;
    while (current) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

template <typename T>
LinkedList<T> LinkedList<T>::clone() {
    LinkedList<T> clonedList;

    Node<T>* current = head;
    while (current) {
        clonedList.pushBack(current->data);
        current = current->next;
    }

    return clonedList;
}

template <typename T>
LinkedList<T> LinkedList<T>::operator+(const LinkedList<T>& other) {
    LinkedList<T> result = clone();

    Node<T>* current = other.head;
    while (current) {
        if (!result.contains(current->data)) {
            result.pushBack(current->data);
        }
        current = current->next;
    }

    return result;
}

template <typename T>
LinkedList<T> LinkedList<T>::operator*(const LinkedList<T>& other) {
    LinkedList<T> result;

    Node<T>* current = head;
    while (current) {
        if (other.contains(current->data)) {
            result.pushBack(current->data);
        }
        current = current->next;
    }

    return result;
}

template <typename T>
bool LinkedList<T>::contains(T val) const {
    Node<T>* current = head;
    while (current) {
        if (current->data == val) {
            return true;
        }
        current = current->next;
    }
    return false;
}

template class LinkedList<int>;