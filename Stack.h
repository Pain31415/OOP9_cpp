#ifndef STACK_H
#define STACK_H
#include "LinkedList.h"

template <class T>
class Stack {
private:
    LinkedList<T> list;

public:
    void Push(const T& data);
    void Pop();
    T Top() const;
    bool IsEmpty() const;
    void Clear();
};

#endif // STACK_H