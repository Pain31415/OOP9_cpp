#include "Stack.h"

template <typename T>
Stack<T>::Stack() {}

template <typename T>
Stack<T>::~Stack() {}

template <typename T>
void Stack<T>::Push(const T& value) {
    list.Push(value);
}

template <typename T>
void Stack<T>::Pop() {
    list.Pop();
}

template <typename T>
T Stack<T>::Top() const {
    return list.Top();
}

template <typename T>
bool Stack<T>::IsEmpty() const {
    return list.IsEmpty();
}

template <typename T>
void Stack<T>::Clear() {
    list.Clear();
}

template <typename T>
void Stack<T>::Display() const {
    // Implementation of Display function (you can print elements)
}

template <typename T>
Stack<T> Stack<T>::Clone() const {
    Stack<T> clonedStack;
    clonedStack.list = list.Clone();
    return clonedStack;
}

template <typename T>
Stack<T> Stack<T>::operator+(const Stack& other) const {
    // Implementation of operator+
}

template <typename T>
Stack<T> Stack<T>::operator*(const Stack& other) const {
    // Implementation of operator*
}