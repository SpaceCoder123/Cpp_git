#include<iostream>
#include<string>

using namespace std;

int main(){
    unsigned short shortvar = 5;
    unsigned long longvar = 65536;
    long sVar = -65535;
    int *pAge = 0; // this is used to hold the address of an int, you set it up to hold an integer 
    // the above pointer is initialized to zero and therefore is null pointer

    cout<<"Shortvar: "<<shortvar<<", Address of the shortvar is = "<<&shortvar<<endl;
    cout<<"longvar: "<<longvar<<", Address of the longvar is = "<<&longvar<<endl;
    cout<<"sVar: "<<sVar<<", Address of the sVar is = "<<&sVar<<endl;


    int howOld1 = 50;
    cout<<"howOld1: "<<howOld1<<", Address of the howOld1 is = "<<&howOld1<<endl;
    pAge = &howOld1; // this puts howOld's address in a pAge
    cout<<"howOld1: "<<howOld1<<", Address of the howOld1 is = "<<&howOld1<<endl;

    // now the memory location of the pAge is changed to howOld location

    unsigned short int howOld2 = 50;
    unsigned short int *pAge1 = &howOld2;

    cout<<*pAge1<<endl;

    unsigned short int yourAge;
    yourAge = *pAge1;


    cout<<&yourAge<<endl;
    cout<<yourAge<<endl;


    int theVariable =5;
    int *pPointer = &theVariable;

    cout<<"The memory location of theVarible is "<<&theVariable<<" and the value of the variable is = "<<theVariable<<endl;




    return 0;
}


/*
so basically what is a pointer?
what is a variable that holds the memory address

what is memory address?
Computer memory is where those values are stored. By convention, computer memory is divided in to sequentially numbered memory locations, each ofthese memory locations is a memory address

Each variable of its own unique type is stored in an address. 

Storing the address in a pointer
Every pointer has an address, even without knowing the specific address of a given variable, you can store that address in a pointer

A pointer is a special type of variable that is set up to hold the address of some object in memory

all pointers that are created should be initialized to something

the pointer than is not initialized to anything is called a wild pointer and therefore are not recommended in programming

what is indirection?
Indirection means accessing the value of the address held by a pointer. The ppinter provides an indirect way to get the value held at that address

Indirection operator (*) is also called the dereference operator. when is pointer is dereferenced, the value of the address stored by the pointer is retreived

star indicates that it is a pointer, not a normal variable.



*/


