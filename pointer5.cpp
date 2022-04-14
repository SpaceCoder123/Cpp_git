#include<iostream>
#include<string>
using namespace std;
int main(){
    int localVariable = 5;
    int *plocal = &localVariable;
    int *pHeap = new int;

    *pHeap = 7;
    cout<<" Local Variable = "<<localVariable<<endl;
    cout<<" *pLocal: "<<*plocal<<endl;
    cout<<" *pheap: "<< *pHeap<<endl;
    delete pHeap; // removing the pointer from the free store
    pHeap = new int; // creating a new pointer in the free store and assigning int value to the pointer
    *pHeap = 9;
    cout<<" *pHeap = "<<*pHeap<<endl;
    delete pHeap;

    // typical example for memoryleak
    unsigned short int *pPointer = new unsigned short int; // assigns the avlue at the free store
    *pPointer = 72; // adds value of 72 to the area of memory
    pPointer = new unsigned short int; // this points to another area in the memory
    // there is no way to recover the original value of 72 or delete the value until the program ends
    *pPointer = 84;
    return 0;
}

/* 

output
Local Variable = 5
 *pLocal: 5
 *pheap: 7
 *pHeap = 9

*/