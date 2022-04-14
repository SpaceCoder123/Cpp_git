#include<iostream>
#include<string>

using namespace std;


class AbstractEmployee{
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

class Developer: Employee{ // the developer class became a child class and the employee became the parent class
    // now the Developer class has all the properties inherited from Employee class

    public:
        string FavProgrammingLanguage;
        // there will be an error if you run like this, since the default constructor is not present

        Developer(string name, string company, int age, string favProgrammingLanguage)
        {
            FavProgrammingLanguage = favProgrammingLanguage;
        }; 
        void fixBug(){
            cout<<getName()<<"Fixed bug using "<<FavProgrammingLanguage<<endl;
        }


};

int main(){

    Employee employee2;
    employee2.setName("John");
    employee2.setCompany("Amazon");
    employee2.setAge(17);

    Employee employee3;
    employee2.setName("Sara");
    employee2.setCompany("Flipkart");
    employee2.setAge(34);

    Developer employee4= Developer("Saldina","Amazon",25,"C++");
    employee4.fixBug();
    return 0;

}

/* 

what is inheritance?

there is a parent class or a super class and there is a derived class or also known as child class, 
since the parent class is a superset of the parent class or wants to be or wants to inherit from the super class then 
the child class will have all the attributes and properties as the base class and 
the child class can have its own members or properties of its own class which parent class might not possess




*/