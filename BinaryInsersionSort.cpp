#include "BinaryInsersionSort.hpp"
#include "List.hpp"


List insertion_sort(List list, int length){
    List newList = list.clone();
    Cell* temp;
    temp= newList.getHead();



    while (temp->next != nullptr){
        int valueToinsert = temp->value;
        Cell* hole_position = temp;

        while (temp->next != nullptr and temp->value > temp->next->value){
            int temp_ = temp->value;
            temp->value = temp->next->value;
            temp->next->value = temp_;


        }




    };

    return newList;

}





