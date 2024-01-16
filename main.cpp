#include "Stack.h"
#include <iostream>

int main() {
    Stack<int> stack;

    stack.Push(1);
    stack.Push(2);
    stack.Push(3);

    std::cout << "Top element: " << stack.Top() << std::endl;

    stack.Pop();
    std::cout << "Top element after pop: " << stack.Top() << std::endl;

    stack.Clear();

    if (stack.IsEmpty()) {
        std::cout << "Stack is empty\n";
    }
    else {
        std::cout << "Stack is not empty\n";
    }

    return 0;
}