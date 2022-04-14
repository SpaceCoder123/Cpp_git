#include<iostream>
#include<cmath>
#include<string>

using namespace std;

double vectorLength(double x, double y, double z);
double vector_add(double vectorA[3][1],double vectorB[3][1]);

int main(){

    double vector1[3][1] ;
    double vector2[3][1] ;

    cout<<"We are adding vector 1 with vector 2, They each have 3 rows and 1 column"<<endl;
    cout<<"Vector 1 input X in m"<<endl;
    cin >> vector1[0][0];
    cout<<"Vector 1 input Y in m"<<endl;
    cin >> vector1[1][0];
    cout<<"Vector 1 input Y in m"<<endl;
    cin >> vector1[2][0];

    cout<<"Vector 2 input X in m"<<endl;
    cin >> vector2[0][0];
    cout<<"Vector 2 input Y in m"<<endl;
    cin >> vector2[1][0];
    cout<<"Vector 2 input Y in m"<<endl;
    cin >> vector2[2][0];

    cout<< vector_add(vector1,vector2)<<endl;
    
    return 0;
}

double vectorLength(double x, double y, double z){
    double l = pow(x,2)+ pow(y,2) + pow(z,2);
    return l;
};

double vector_add(double vectorA[3][1],double vectorB[3][1]){
    double vector_add_result[3][1];
    for (int i = 0; i < 3;i++){
        vector_add_result[i][0] = vectorA[i][0]+vectorB[i][0];
    }
    
    return **vector_add_result;
}