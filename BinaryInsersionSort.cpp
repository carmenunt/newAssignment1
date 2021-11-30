#include "BinaryInsersionSort.hpp"
#include "List.hpp"
#include "Queue.hpp"
#include "Stack.hpp"


List BinaryInsersionSort::insertion_sort(List list, int length) {
    List newList = list.clone();
    Cell *temp;
    temp = newList.getHead();


    while (temp->next != nullptr) {
        int valueToinsert = temp->value;
        Cell *hole_position = temp;

        while (temp->next != nullptr and temp->value > temp->next->value) {
            int temp_ = temp->value;
            temp->value = temp->next->value;
            temp->next->value = temp_;


        }


    };
    return newList;
}





Queue BinaryInsersionSort::insertion_sort(Queue queue, int length) {
    Queue newQueue = queue.clone();
    Cell *temp;
    temp = queue.enqueue(temp->value);


    while (temp->next != nullptr) {
        int valueToinsert = temp->value;
        Cell *hole_position = temp;

        while (temp->next != nullptr and temp->value > temp->next->value) {
            int temp_ = temp->value;
            temp->value = temp->next->value;
            temp->next->value = temp_;


        }


    };

    return newQueue;
}


Stack BinaryInsersionSort::insertion_sort(Stack stack, int length) {
    Stack newStack = stack.clone();
    Cell *temp;
    temp = newStack.topElement();


    while (temp->next != nullptr) {
        int valueToinsert = temp->value;
        Cell *hole_position = temp;

        while (temp->next != nullptr and temp->value > temp->next->value) {
            int temp_ = temp->value;
            temp->value = temp->next->value;
            temp->next->value = temp_;


        }


    };

    return newStack;
}



