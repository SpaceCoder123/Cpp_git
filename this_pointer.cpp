#include<iostream>
#include<string>

using namespace std;
class Rectangle{
    public:
        Rectangle();
        ~Rectangle();
        void setLength(int length){this -> itsLength = length;}
        int GetLength() const {return this-> itsLength;}
        void setWidth(int width){itsWidth = width;};
        int getWidth() const {return itsWidth;};
    private:
        int itsLength;
        int itsWidth;
};
Rectangle::Rectangle(){
    itsWidth = 5;
    itsLength = 10;
};
Rectangle::~Rectangle(){};

int main(){
    Rectangle theRect;
    cout<<"the rect is "<<theRect.GetLength()<<" feetlong"<<endl;
    cout<<"The rect is "<<theRect.getWidth()<<" feet wide"<<endl;
    theRect.setLength(20);
    theRect.setWidth(10);
    cout<<"the rect is "<<theRect.GetLength()<<" feetlong"<<endl; 
    cout<<"The rect is "<<theRect.getWidth()<<" feet wide"<<endl;
    return 0;
};