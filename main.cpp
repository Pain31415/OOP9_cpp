#include <iostream>
#include "LinkedList.h"

int main() {
    LinkedList<int> list1;
    list1.pushBack(1);
    list1.pushBack(2);
    list1.pushBack(3);

    LinkedList<int> list2;
    list2.pushBack(2);
    list2.pushBack(3);
    list2.pushBack(4);

    LinkedList<int> clonedList = list1.clone();
    LinkedList<int> concatenatedList = list1 + list2;
    LinkedList<int> commonElementsList = list1 * list2;

    std::cout << "Cloned List: ";
    clonedList.display();

    std::cout << "Concatenated List: ";
    concatenatedList.display();

    std::cout << "Common Elements List: ";
    commonElementsList.display();

    return 0;
}