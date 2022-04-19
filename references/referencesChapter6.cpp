#include<iostream>
#include<string>
using namespace std;
void swap(int &x, int &y);
int main(){
    int x =5, y = 10;
    cout<<"Main, before swap x :" << x<<" y :"<<y<<endl;
    swap(x,y);
    cout<<"Main, after swap x :"<<x<<" y :"<<y<<endl;

    return 0;
}

void swap(int &x,int &y){
    int temp;

    cout<<"Swap, before swap "<<endl;
    cout<<"x: "<<x<<" y: "<<y<<endl;
    temp = x;
    x = y;
    y = temp; 
    cout<<"Swap, after swap "<<endl;
    cout<<"x: "<<x<<" y: "<<y<<endl;

};