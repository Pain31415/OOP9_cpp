#include "LinkedList.h"
#include <iostream>

template <typename T>
LinkedList<T>::LinkedList() : head(nullptr), tail(nullptr) {}

template <typename T>
LinkedList<T>::~LinkedList() {
    DeleteAll();
}

template <typename T>
void LinkedList<T>::AddToHead(T value) {
    Node<T>* newNode = new Node<T>(value);
    if (!head) {
        head = tail = newNode;
    }
    else {
        newNode->next = head;
        head = newNode;
    }
}

template <typename T>
void LinkedList<T>::AddToTail(T value) {
    Node<T>* newNode = new Node<T>(value);
    if (!head) {
        head = tail = newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
}

template <typename T>
void LinkedList<T>::DeleteFromHead() {
    if (head) {
        Node<T>* temp = head;
        head = head->next;
        delete temp;
    }
}

template <typename T>
void LinkedList<T>::DeleteFromTail() {
    if (head) {
        if (head == tail) {
            delete head;
            head = tail = nullptr;
        }
        else {
            Node<T>* temp = head;
            while (temp->next != tail) {
                temp = temp->next;
            }
            delete tail;
            tail = temp;
            tail->next = nullptr;
        }
    }
}

template <typename T>
void LinkedList<T>::DeleteAll() {
    while (head) {
        Node<T>* temp = head;
        head = head->next;
        delete temp;
    }
    tail = nullptr;
}

template <typename T>
void LinkedList<T>::Show() {
    Node<T>* temp = head;
    while (temp) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

template <typename T>
void LinkedList<T>::InsertAtPosition(T value, int position) {
    Node<T>* newNode = new Node<T>(value);

    if (position <= 0) {
        newNode->next = head;
        head = newNode;
    }
    else {
        Node<T>* temp = head;
        for (int i = 1; i < position && temp; ++i) {
            temp = temp->next;
        }
        if (temp) {
            newNode->next = temp->next;
            temp->next = newNode;
            if (!newNode->next) {
                tail = newNode;
            }
        }
        else {
            // Вставка в кінець списку, якщо позиція більша за довжину списку
            tail->next = newNode;
            tail = newNode;
        }
    }
}

template <typename T>
void LinkedList<T>::DeleteAtPosition(int position) {
    if (position <= 0) {
        DeleteFromHead();
    }
    else {
        Node<T>* temp = head;
        Node<T>* prev = nullptr;
        for (int i = 1; i < position && temp; ++i) {
            prev = temp;
            temp = temp->next;
        }
        if (temp) {
            if (!temp->next) {
                // Видалення з кінця списку
                tail = prev;
            }
            if (prev) {
                prev->next = temp->next;
            }
            else {
                // Видалення з голови списку
                head = temp->next;
            }
            delete temp;
        }
    }
}

template <typename T>
int LinkedList<T>::FindElement(T value) {
    Node<T>* temp = head;
    int position = 0;
    while (temp) {
        if (temp->data == value) {
            return position;
        }
        temp = temp->next;
        ++position;
    }
    return -1; // Позначає невдачу
}

template <typename T>
int LinkedList<T>::ReplaceElement(T old_value, T new_value) {
    Node<T>* temp = head;
    int count = 0;
    while (temp) {
        if (temp->data == old_value) {
            temp->data = new_value;
            ++count;
        }
        temp = temp->next;
    }
    if (count > 0) {
        return count;
    }
    else {
        return -1; // Позначає невдачу
    }
}

template <typename T>
void LinkedList<T>::Reverse() {
    Node<T>* prev = nullptr;
    Node<T>* current = head;
    Node<T>* next = nullptr;

    while (current) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;
}