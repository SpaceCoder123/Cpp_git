#include<iostream>
#include<string>

using namespace std;
int main(){
    int someInt;
    int &rSomeRef = someInt;
        // this is creating a reference
    someInt = 5;
 
    cout<<"someInt : " << someInt<<endl;
    cout<<"rSomeRef : " << rSomeRef<<endl;
    someInt = 6;

    cout<<"someInt : " << someInt<<endl;
    cout<<"rSomeRef : " << rSomeRef<<endl;
    // in this the rSomeRef is a reference to SomeInt and therefore will print the same output
    return 0;

}

/* 
what is a reference? Reference is an alias, when you create a refernce you initiate it with the name of another object, the target. From that moment on, the reference acts as an 
alternative name for the obkect, and anything you do to the reference is really done to the target. 
Pointers are variables that hold teh address of another object. References are aliases to another reference

if you declare a reference and dont initialize it, you will get a compile time error. References must be initialized

*/