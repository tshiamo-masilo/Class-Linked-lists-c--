#pragma once
#include "LinkedListNode.h"
#include <iostream>

using namespace std;
class LinkedList{
    public:
    LinkedList();
    LinkedListNode* Head;
    friend ostream& operator <<(ostream& ost, LinkedList& rhs);
    void pushBack(int);
    void popBack();
    double Front();
    double Back();
    void Clear();
    bool isEmpty();

};