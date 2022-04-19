#include<iostream>
#include<string>
using namespace std;

short factor (int, int*,int*);
int main(){
    int number,squared, cubed;
    short error;
    cout<<"Enter any number 1-20"<<endl;
    cin>>number;

    error = factor(number,&squared,&cubed);

    if (!error){
        cout<<"Number = "<<number<<endl;
        cout<<"square = "<<squared<<endl;
        cout<<"cube = "<<cubed<<endl;
    }
    else{
        cout<<"error encountered "<<endl;
    }
    return 0;
}

short factor (int n, int *psquared, int *pcubed){
    short value = 0;
    if (n>20){
        value = 1;
    }
    else{
        *psquared = n*n;
        *pcubed = n*n*n;
        value = 0;

    }
    return value;
}