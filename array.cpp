#include<iostream>
#include<cmath>
#include<string>

using namespace std;

double vectorLength(double x, double y, double z);


int main(){
    double x,y,z,l;// vector declaration
    double vector[3][1]= {{x},{y},{z}};
    cout<<"Input X in m"<<endl;
    cin >> vector[0][0];
    cout<<"Input Y in m"<<endl;
    cin >> vector[1][0];
    cout<<"Input Z in  m"<<endl;
    cin >> vector[2][0];
    
    //cout<<vector<<endl;
    l = vectorLength(vector[0][0],vector[1][0],vector[2][0]);
    cout<<"The length of the array is "<<l<<endl;
    return 0;
}

double vectorLength(double x, double y, double z){
    double l = pow(x,2)+ pow(y,2) + pow(z,2);
    return l;
};