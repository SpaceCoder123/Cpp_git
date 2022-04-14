#include<iostream>
#include<string>

using namespace std;


class AbstractEmployee{
    /* this class here is going serve as a contract 
    this contract will have only one rule and that is 
    whichever class decides to write this class, that class will need to provide implementation for askForPromotion
*/
    virtual void askForPromotion()=0;
};

class Employee:AbstractEmployee {
private:
    string name;
    string company;
    int age;
public: 
    void setName(string Name){
        name = Name; 
    };
    string getName(){
        return name;
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
            belowParAge();
        }
    };
    int getAge(){
        return age; 
    };

    void belowParAge(){
        cout<<"Age of the employee is below par and hence rejected or kindly check the records again"<<endl;
    };

    void introduceYourself(){ 
        cout<<"Inside introduce yourself method "<<endl;
        cout<<"Name "<<name<<endl;
        cout<<"Company "<<company<<endl;
        cout<<"age "<<age<<endl;
    };
    void askForPromotion(){ 
        if (age>30){
        cout<<"Name "<<name<<" got promoted "<<endl;
        }
        else{
            cout<<"Name "<<name<<" Sorry! no promotion for you"<<endl;
        }
    };
};


int main(){

    Employee employee2;
    employee2.setName("John");
    employee2.setCompany("Amazon");
    employee2.setAge(17);

    employee2.askForPromotion();


    Employee employee3;
    employee2.setName("Sara");
    employee2.setCompany("Flipkart");
    employee2.setAge(34);

    employee2.askForPromotion();

    return 0;
}



/*

what is abstraction?
Abstraction is the process in which we are hiding complex things behind a procedure that makes those things look simple
for example: user interface and logic that runs behind the button clicking as conserned and therefore you dont want them know the behind logic of click of 
a button and make sure its encrypted
This process of hiding the complexity from the user is called Abstraction


*/