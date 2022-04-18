#include<iostream>
#include<string>

using namespace std;
int main(){
    int intOne;
    int &someRef = intOne; // someRef is initialized to intOne 
    intOne = 5;
    cout<<" IntOne : "<<intOne<<endl;
    cout<<" SomeRef : "<<someRef<<endl;
     
    cout<<" IntOne : "<<&intOne<<endl;
    cout<<" SomeRef : "<<&someRef<<endl; 


    int intTwo =8; 
    someRef = intTwo; // this SomeRef will continue to reference the memory of the first variable declared or assigned and therefore will reference its memory location
    // in simple words you are literally saying intOne = intTwo with the same reference
    cout<<" IntOne : "<<intOne<<endl;
    cout<<" IntTwo : "<<intTwo<<endl;
    cout<<" SomeRef : "<<someRef<<endl;
     
    cout<<" IntOne : "<<&intOne<<endl;
    cout<<" &IntTwo : "<<&intTwo<<endl;
    cout<<" SomeRef : "<<&someRef<<endl; 

    return 0;
}
