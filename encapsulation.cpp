#include<iostream>
#include<string>

using namespace std;

// the below piece of code is called a blueprint of the class in cpp

class Employee{
private: // for readability,
    string name; // I want to make these three properties private and not accessible to other programs
    string company;
    int age;
    // note in cpp class is private by default
public: 
    void setName(string Name){
        name = Name; // this method will set or assign the input value to the given input variable inside the private access modifier
    };
    string getName(){
        return name; // this method will retrieve the data stored in the name attribute in the given class
    };
    void setCompany(string Company){
        company = Company; 
    };
    string getCompany(){ 
        return company;
    };
    void setAge(int Age){
        if(Age >= 18){
            age = Age; 
        }
        else{
            age = Age;
            belowParAge(); // declaring age is below par
        }
    };
    int getAge(){
        return age; 
    };

    void belowParAge(){
        cout<<"Age of the employee is below par and hence rejected or kindly check the records again"<<endl;
    };

    // the methods that are declared above can be accessed by any other properties or classes or compilers



    void introduceYourself(){ // this is a method which uses the class properties
        cout<<"Inside introduce yourself method "<<endl;
        cout<<"Name "<<name<<endl;
        cout<<"Company "<<company<<endl;
        cout<<"age "<<age<<endl;
    };
}; // if you miss the semicolon, compile time error



int main(){

   /* Employee employee1;
    employee1.name = "John";
    employee1.company = "Amazon";
    employee1.age = 35;
    employee1.introduceYourself(); */


    // take a look at the above lines of code, we can use only introduceYourself method from the above class, rest all are under private
    // to counter this, we have to expose our own methods to retrieve or set the name and other details from the class 

    Employee employee2;
    employee2.setName("John");
    employee2.setCompany("Amazon");
    employee2.setAge(17);

    cout<< "The name of the employee2 is "<<employee2.getName()<<endl;
    cout<< "The company " <<employee2.getName()<<" works for is "<<employee2.getCompany()<<endl;
    cout<< "The age of the employee is = "<<employee2.getAge()<<" years old."<<endl;

    // cout<<"Or"<<endl;

    // employee2.introduceYourself(); // this is a special funtion to print out all the values that are stored in the class


    return 0;
}

/* 

What is encapsulation?

Idea of bundling or tieing to together data and methods that operate on that data, So basically they are grouped under the data
We particularly apply this method because we should not allow any other programs to directly modify or change my data from the parent directory or class

I want to provide my own way for that to happen
The programs are mainly calculated based on getters and setters which are present in the program

the idea of encapsulation to hide or privatize the main data and give the user a different method to access those data for data protection or privacy within the c

*/


// assignment- filter name for not including alphanumerical characters inside the name variable or company variable for that matter