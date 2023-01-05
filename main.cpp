#include <iostream>
#include "LinkedList.h"
#include "LinkedList.cpp"

using namespace std;

int main(){

    LinkedList List1;
    List1.pushBack(1);
    List1.pushBack(2);
    List1.pushBack(3);
    List1.pushBack(4);

    cout<<List1<<endl;

    return 0;
}
