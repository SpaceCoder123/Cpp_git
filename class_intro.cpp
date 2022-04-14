#include<iostream>
#include<string>

using namespace std;

// the below piece of code is called a blueprint of the class in cpp
class Employee{ // this is how we define a class in cpp
public: 
    string name; // this is called an attribute
    string company;
    int age;
    // note in cpp class is private by default

    void introduceYourself(){ // this is a method which uses the class properties
        cout<<"Inside introduce yourself method "<<endl;
        cout<<"Name "<<name<<endl;
        cout<<"Company "<<company<<endl;
        cout<<"age "<<age<<endl;
    };
}; // if you miss the semicolon, compile time error



class car{
    public:
        string Name; // this is called an attribute
        string Company;
        int Quantity;
    // private: // if you make the constructor private then there will be an error saying employee constructor is inaccessible
        // constructor for the car class
    car(string name, string company, int quantity){
        Name = name;
        Company = company;
        Quantity = quantity;
    } // the moment you execute the above block, the default constructor before used will be removed and will generate an error wherever the class is defined

    void introduceYourself(){
        cout<<"Inside introduce yourself method "<<endl;
        cout<<"Name "<<Name<<endl;
        cout<<"Company "<<Company<<endl;
        cout<<"Quantity "<<Quantity<<endl;
    }
};





int main(){
    int number; // this is a variable of type int
    Employee employee1; // variable of type employee or the object of the class employee declared above
    string name = "Saldina"; // giving values for the class 
    string company = "YT Cold Beauty ";
    int age = 25;

    employee1.name = name; // assigning values for the class 
    employee1.company = company; 
    employee1.age = age;

    cout<<"The name of the employee is "<<employee1.name<<endl;
    cout<<"The company the employee works in is "<<employee1.company<<endl;
    cout<<"The age of the employee is "<<employee1.age<<endl;

    employee1.introduceYourself(); // note this can be called multiple times
    // instead of calling the program attributes like in line 32-34 we can declare a method and give the function all the required attributes and values to the method

    Employee employee2;
    employee2.name = "John";
    employee2.company = "Amazon";
    employee2.age = 35;
    employee2.introduceYourself();

    // if we observe lines 31-37 and 42-46 we have declare everything and we have millions of employees then the above method is not user friendly and we cant define it 1000s of times
    cout<<"Lets see the output of below lines of code"<<endl;
    Employee employee3;
    employee3.introduceYourself();
    // there are blank output after the string and that is the job of default constructor

    car verna = car("Verna","Hyundai",34); // instead of doing lines like in lien 64 and 68 we can define in one line and get the output
    verna.introduceYourself();

    return 0;
}

    




// what are access modifiers?
/* in cpp we have three types of access modifiers

1 private - whatever is defined within the class cannot be accessed outside of the class or hidden from the program
2 public - whatever is defined within the class can be accessed through out the program and even outside the program
3 protected - later, remember only 3 and later we can learn about this

*/

/* what is a constructor?
    a constructor is a special type of method that is invoked each time the class is created 
    a constructor is method that does not have any return type like any other or function
    the return type of the constructor can be ignored and the name of the constructor should have the same name of the class
    constructor must be public,( for small scale projects make it public, not necessary everytime you need to make it public)
*/


/* what is a default constructor?
    a constructor is a term that is automatically generated and given by the compiler in case you dont define a compiler on your own
*/
