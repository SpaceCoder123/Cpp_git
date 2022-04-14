#include<iostream>
#include<string>

using namespace std;
class Cat{
    public:
        Cat(int initialage); // constructor to the class cat
        ~Cat();
        int getAge(); // returns the age of the object declared in the private modifier
        void setAge(int age); // sets the value of itsAge declared in the private modifier
        void Meow(); // just returns a string called meow
    private:
        int itsAge;
};

Cat::Cat(int initialAge){ // every constructor declared under cat class takes initial age as the input
    itsAge = initialAge;
}

Cat::~Cat(){} 
/* deconstructors clean up after your object and free up your memory you might have allocated, they take no values and return no values */

int Cat::getAge(){
    return itsAge;
}

void Cat::setAge(int age){
    itsAge = age;
}

void Cat::Meow(){
    cout<<"Meow "<<endl;
}

int main(){
    Cat pilli(5);
    pilli.Meow();
    cout<< "pilli is a cat who is "<< pilli.getAge()<<" years old"<<endl;
    pilli.Meow();
    pilli.setAge(7);
    cout<<"Now pilli is "<<pilli.getAge()<<" years old"<<endl;
    return 0;
}