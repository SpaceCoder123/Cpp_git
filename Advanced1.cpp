#include<iostream>
#include<cmath>
#include<string>

using namespace std;

double vectorLength(double x, double y, double z);
int main(){
    double x,y,z,l;
    cout<<"Input X in m"<<endl;
    cin >> x;
    cout<<"Input Y in m"<<endl;
    cin >> y;
    cout<<"Input Z in  m"<<endl;
    cin >> z;
    l = vectorLength(x,y,z);
    cout<<"The length of the array is "<<l<<endl;
    return 0;

}

double vectorLength(double x, double y, double z){
    double l = pow(x,2)+ pow(y,2) + pow(z,2);
    return l;
};