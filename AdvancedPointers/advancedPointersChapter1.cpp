#include<iostream>
#include<string>

using namespace std;

class SimpleCat{
    public:
        SimpleCat();
        SimpleCat(SimpleCat&); //copy constructor
        ~SimpleCat();
};

SimpleCat::SimpleCat(){
    cout<<"Simple cat constructor "<<endl;
};

SimpleCat::SimpleCat(SimpleCat& rhs){
    cout<<"Simple cat copy constructor "<<endl; 
};

SimpleCat::~SimpleCat(){
    cout<<"Simple cat deconstructor "<<endl;
};

SimpleCat FunctionOne(SimpleCat theCat);
SimpleCat* FunctionTwo(SimpleCat *theCat);


int main(){
    
    cout<<"Making a cat "<<endl;
    SimpleCat Frisky;
    cout<<"Calling FunctionOne "<<endl;
    FunctionOne(Frisky);
    cout<<"Calling FunctionTwo "<<endl;
    FunctionTwo(&Frisky); 
    return 0;

}

SimpleCat FunctionOne(SimpleCat theCat){
    cout<<"FunctionOne returning "<<endl;
    return theCat;
};

SimpleCat* FunctionTwo(SimpleCat *theCat){
    cout<<"FunctionTwo returning "<<endl;
    return theCat;
};

/*
Each time you pass an object into function by value, a copy of the object is made. Each time you return an object from a function by value, another copy is made

with larger, user created objects, the ost of these copies is substantial. YOu will use more memory than you need to.

The size of the user created object ib the stack is the sum of each of its member functions. These in turn can each be user created objects, Passing such a massive structure by copying it onto the stack 
can be expensive in terms of performance.

*/