#include<iostream>
#include<string>

using namespace std;
int main(){
    int myAge;
    int *pAge= 0; /// null pointer
    myAge = 5;
    cout<<"myAge = "<<myAge<<endl;

    pAge = &myAge; // assign address of myAge to pAge
    cout<<"*pAge "<<*pAge<<endl;

    *pAge = 7;
    cout<<"*pAge:  "<<*pAge<<endl;
    cout<<"myAge:  "<<myAge<<endl;

    myAge = 9;
    cout<<"*pAge:  "<<*pAge<<endl;
    cout<<"myAge:  "<<myAge<<endl;

    return 0;

}

/* OUTPUT OF THE PROGRAM

myAge = 5
*pAge 5
*pAge:  7
myAge:  7
*pAge:  9
myAge:  9





*/