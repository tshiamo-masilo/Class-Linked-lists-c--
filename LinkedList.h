#pragma once
#include "LinkedListNode.h"
#include <iostream>

class LinkedList{
    public:
    LinkedList();
    private:
    LinkedListNode* Head;
    friend std::ostream& operator <<(std::ostream& ost, LinkedList& rhs);
    void pushBack(int);

};