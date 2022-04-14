#include<iostream>
#include<string>

using namespace std;

class Rectangle{
    int itsLength;
    int itsWidth;

    public:
        Rectangle();
        ~Rectangle();
        void setLength(int length){itsLength = length;};
        int getLength() const {return itsLength;};

        void setWidth(int width){itsWidth = width;};
        int getWidth()const {return itsWidth;};
};

Rectangle::Rectangle():
    itsWidth(5),itsLength(10)
    {};

Rectangle::~Rectangle(){};


int main(){
    Rectangle *prect = new Rectangle;
    const Rectangle *pConstRect = new Rectangle;
    Rectangle *const PConstPtr = new Rectangle;

    cout<<"Prect width "<<prect->getWidth()<<" feet"<<endl;
    cout<<"PconstRect width "<< pConstRect->getWidth()<<" feet"<<endl;
    cout<<"pConstPtr width "<<PConstPtr->getWidth()<<" feet"<<endl;

    prect ->setWidth(10);
    PConstPtr->setWidth(10);

    
    cout<<"Prect width "<<prect->getWidth()<<" feet"<<endl;
    cout<<"PconstRect width "<< pConstRect->getWidth()<<" feet"<<endl;
    cout<<"pConstPtr width "<<PConstPtr->getWidth()<<" feet"<<endl;


    return 0;
}