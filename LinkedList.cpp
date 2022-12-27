#include "LinkedList.h"

LinkedList::LinkedList():Head(nullptr)
{

}

void LinkedList::pushBack(int value){
    if(Head==nullptr){
        Head = new LinkedListNode(value);
    }else{
        LinkedListNode* Current = Head;
        while(Current->Next != nullptr){
            Current = Current->Next;
        }
        LinkedListNode* Temp = new LinkedListNode(value,Current);
        Current->Next = Temp;
    }
}

std::ostream& operator <<(std::ostream& ost, LinkedList& rhs){
    
    std::cout << "X";
    LinkedListNode* Current = rhs.Head;
    while(Current != nullptr){
        std::cout << Current->Data<<" ";
        Current = Current->Next;
    }
    std::cout <<"X";

    return ost;

}
