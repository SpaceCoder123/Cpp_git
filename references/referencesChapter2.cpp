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
    cout<<" SomeRef : "<<&someRef<<endl; // SomeRef is having the same address as intOne as it is being referenced
    return 0;
}


/* 
Using the address of Operator on References



*/