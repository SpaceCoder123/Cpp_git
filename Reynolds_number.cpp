#include<iostream>
#include<cmath>
#include<string>
using namespace std;

double Reynolds_number(double rho,double U,double D,double mu);

int main(){
    double rho,U,D,mu,Re;
    
    cout<<"Input Density in kg/m3"<<endl;
    cin >> rho;
    cout<<"Input Velocity in m/s"<<endl;
    cin >> U;
    cout<<"Input Characterisic length in m"<<endl;
    cin >> D;
    cout<<"Input Dynamic Viscosity in Pas"<<endl;
    cin >> mu;

    Re = Reynolds_number(rho,U,D,mu);
    cout<< Re << endl;

}

double Reynolds_number(double rho,double U,double D,double mu){
    double Re;
    Re = (rho*U*D)/mu;
    cout<<"The Reynolds number is "<<endl;
    return Re;
};