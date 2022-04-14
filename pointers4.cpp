#include<iostream>
#include<string>

using namespace std;

int main(){
    unsigned short int *pPointer; 
    pPointer = new unsigned short int; //2 bytes

    unsigned short int *pPointer = new unsigned short int; // points at a random location memory address 

    *pPointer = 72; // just a local variable
    /* when the functions return the value of the pPointer goes out of scope and is lost. The memory allocated previously is not freed automatically. 
    the memory becomes unavailable and therefore is called a memory leak

    this points are the free store memory
    */ 
   delete pPointer;
   // this will restore the memory to the free store, which literally says " Return to the free store, the memory the pointer points to"

    // if it is an old compiler then it returns null pointer
    return 0;
}