#ifndef STACK_H
#define STACK_H

#include "LinkedList.h"

template <typename T>
class Stack {
private:
    LinkedList<T> list;

public:
    Stack();
    ~Stack();

    void Push(const T& value);
    void Pop();
    T Top() const;
    bool IsEmpty() const;
    void Clear();
    void Display() const;

    Stack Clone() const;
    Stack operator+(const Stack& other) const;
    Stack operator*(const Stack& other) const;
};

#include "Stack.cpp"

#endif