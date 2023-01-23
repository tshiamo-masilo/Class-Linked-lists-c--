#include <iostream>
#include "LinkedList.h"
#include "LinkedList.cpp"

using namespace std;

int main(){

    LinkedList List1;
    LinkedList List2;
    List1.pushBack(1);
    List1.pushBack(2);
    List1.pushBack(3);
    List1.pushBack(4);

    cout<<List1<<endl;

    for(int i =0;i<5;i++){
        List2.pushBack(i);
    }

    for(int x=0;x<5;x++){

        try{
             List2.popBack();
        }
        catch(exception e){
            cout<<"Linked List is empty"<<endl;
        }
       
    }

    return 0;
}
