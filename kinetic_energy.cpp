#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    float m,v;
    string first_statement, second_statement, third_statement;
    first_statement = "In this solver we are going to calculate the kinetic energy of the system";
    second_statement = "Enter the value of the velocity of the body (m/s)";
    third_statement = "Enter the value of the mass of the body (kg)";

    cout<< first_statement << endl;
    cout<< second_statement << endl;
    cin>> v;
    cout<< third_statement << endl;
    cin>> m;

    cout<<"The kinetic energy of the system is "<< (0.5*m*pow(v,2))<<endl;
    return 0;
}