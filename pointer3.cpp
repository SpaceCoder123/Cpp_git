#include<iostream>
#include<string>

using namespace std;

int main(){
    unsigned short int myAge = 5,yourAge = 10;
    unsigned short int *pAge = &myAge; // the pointer is having the address location of my age

    cout<<"myAge = "<<myAge<<", Your age = "<<yourAge<<endl;
    cout<<"&myAge = "<<&myAge<<", Your age = "<<&yourAge<<endl; // stored in two different address,

    cout<<"pAge = "<<pAge<<endl; // the variable will hold the address
    cout<<"*pAge = "<< *pAge<<endl; //  and the pointer will hold the value

    pAge = &yourAge; // reassigning the variable to the memory location of yourAge 

    cout<<"myAge = "<<myAge<<", Your age = "<<yourAge<<endl;
    cout<<"&myAge = "<<&myAge<<", Your age = "<<&yourAge<<endl;

    cout<<"pAge = "<<pAge<<endl; // the variable will hold the address and the pointer will hold the value
    cout<<"*pAge = "<< *pAge<<endl;

    cout<<"&page = "<<&pAge<<endl; // this is the memory location of the pointer variable
    //* holds the value of the variable, and normal variable hold whatever you assign to it

    return 0;
};


/* output 


myAge = 5, Your age = 10
&myAge = 0x7ffe5d96b10c, Your age = 0x7ffe5d96b10e
pAge = 0x7ffe5d96b10c
*pAge = 5
myAge = 5, Your age = 10
&myAge = 0x7ffe5d96b10c, Your age = 0x7ffe5d96b10e
pAge = 0x7ffe5d96b10e
*pAge = 10
&page = 0x7ffe5d96b110


*/