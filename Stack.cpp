#include "Stack.h"

template <class T>
void Stack<T>::Push(const T& data) {
    list.Push(data);
}

template <class T>
void Stack<T>::Pop() {
    list.Pop();
}

template <class T>
T Stack<T>::Top() const {
    return list.Top();
}

template <class T>
bool Stack<T>::IsEmpty() const {
    return list.IsEmpty();
}

template <class T>
void Stack<T>::Clear() {
    list.Clear();
}

template class Stack<int>;