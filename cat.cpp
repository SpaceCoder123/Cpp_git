#include<iostream>
#include<string>

using namespace std;

class Cat
{
    private:
        int itsAge;
    public:
        Cat (int initialAge){};
        ~Cat();
        int getAge() const {return itsAge;};
        void setAge(int age){ itsAge = age;};
        void Meow() const {cout<<"Meow "<<endl;};
};


