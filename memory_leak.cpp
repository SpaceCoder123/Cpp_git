#include<iostream>
#include<string>
using namespace std;
int main(){

    // typical example for memoryleak
    unsigned short int *pPointer = new unsigned short int;
    *pPointer = 72; 
    delete pPointer; // removes the pointer and free's the memory
    pPointer = new unsigned short int; 
    *pPointer = 84;
    return 0;
}
