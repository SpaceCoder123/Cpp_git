#include <iostream>
#include<string>
using namespace std;

int main(){
    cout<< "Hello world" <<endl;
    float a,b;
    string first_statement, second_statement, third_statement;
    first_statement = "now we are going to divide a and b";
    second_statement = "Enter the value of a";
    third_statement = "Enter the value of b";
    cout<< first_statement<<endl;
    
    cout<< second_statement <<endl;
    cin >> a;
    cout<< third_statement<<endl;
    cin >> b;
    cout << a/b <<endl;
    return 0;
}