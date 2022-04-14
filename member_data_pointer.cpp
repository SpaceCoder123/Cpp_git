#include<iostream>
#include<string>

using namespace std;
class SimpleCat{
    public:
        SimpleCat(){itsAge =2;};
        ~SimpleCat(){};
        int getAge() const {return itsAge;};
        void setAge(int Age){itsAge = Age;};
    private:
        int itsAge;
};  

int main(){
    SimpleCat *Frisky = new SimpleCat;
    cout<< "Frisky is "<<Frisky->getAge()<<" years old"<<endl;
    Frisky->setAge(5);
    cout<< "Frisky is "<<Frisky->getAge()<<" years old"<<endl;
    delete Frisky;
    return 0;
}

/* -> operator is a points too operator and therefore is used to access the member data and the functions */