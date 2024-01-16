#include <iostream>
#include "LinkedList.h"

int main() {
    LinkedList<int> myList;

    myList.AddToHead(3);
    myList.AddToTail(5);
    myList.AddToHead(1);
    myList.AddToTail(7);

    std::cout << "Linked List: ";
    myList.Show();

    myList.InsertAtPosition(4, 2);
    std::cout << "After inserting 4 at position 2: ";
    myList.Show();

    myList.DeleteAtPosition(3);
    std::cout << "After deleting element at position 3: ";
    myList.Show();

    int searchElement = 5;
    int position = myList.FindElement(searchElement);
    if (position != -1) {
        std::cout << "Element " << searchElement << " found at position " << position << std::endl;
    }
    else {
        std::cout << "Element " << searchElement << " not found." << std::endl;
    }

    int oldElement = 1;
    int newElement = 10;
    int replaceCount = myList.ReplaceElement(oldElement, newElement);
    if (replaceCount != -1) {
        std::cout << "Replaced " << replaceCount << " occurrences of " << oldElement << " with " << newElement << ": ";
        myList.Show();
    }
    else {
        std::cout << "Element " << oldElement << " not found for replacement." << std::endl;
    }

    myList.Reverse();
    std::cout << "After reversing the list: ";
    myList.Show();

    myList.DeleteAll();

    return 0;
}