#include<iostream>
#include<string>

using namespace std;

void swap (int a, int b);
int main(){
    int x = 5;
    int y = 10;

    cout<<"Main, before swap x: "<<x<<" y: "<<y<<endl;
    swap(x,y);
    cout<<"Main, after swap x: "<<x<<" y: "<<y<<endl;

    return 0;
}

void swap(int a, int b){
    int temp;
    cout<< "Swap, before swap, a = "<<a<<" b = "<<b<<endl;
    temp = a;
    a = b;
    b = temp;
    cout<< "Swap, after swap, a = "<<a<<" b = "<<b<<endl;

};