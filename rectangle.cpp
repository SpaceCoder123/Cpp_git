#include<iostream>
#include<string>

using namespace std;

class Point{
    private:
        int itsX;
        int itsY;
    public:
        void SetX(int x){itsX = x;};
        void SetY(int y){itsY = y;};
        int GetX() const {return itsX;};
        int GetY() const {return itsY;};
};

class Rectangle{
    private:
        Point itsUpperLeft;
        Point itsLowerLeft;
        Point itsUpperRight;
        Point itsLowerRight;
        int itstop;
        int itsleft;
        int itsbottom;
        int itsright;

    public:
        Rectangle (int top, int left, int bottom, int right);
        ~Rectangle(){}

        int gettop() const {return itstop;};
        int getleft() const {return itsleft;};
        int getbottom() const {return itsbottom;};
        int getright() const {return itsright;};

        Point getUpperLeft() const {return itsUpperLeft;}
        Point getLowerLeft() const {return itsLowerLeft;}
        Point getUpperRight() const {return itsUpperRight;}
        Point getLowerRight() const {return itsLowerRight;}

        void setUpperLeft(Point Location){itsUpperLeft = Location;};
        void setUpperRight(Point Location){itsUpperLeft = Location;};
        void setLowerLeft(Point Location){itsLowerLeft = Location;};
        void setLowerRight(Point Location){itsLowerLeft = Location;};

        void settop(int top) {itstop = top;};
        void setleft(int left) {itsleft = left;};
        void setbottom(int bottom) {itsbottom = bottom;};
        void setright(int right) {itsright = right;};

        int getArea() const;
};

Rectangle::Rectangle(int top,int left, int right, int bottom){
    itstop = top;
    itsleft = left;
    itsright = right;
    itsbottom = bottom;

    itsUpperLeft.SetX(left);
    itsUpperLeft.SetY(top);
    itsUpperRight.SetX(right);
    itsUpperRight.SetY(top);
    itsLowerLeft.SetX(left);
    itsLowerLeft.SetY(bottom);
    itsUpperRight.SetX(right);
    itsUpperRight.SetY(bottom);
}

int Rectangle::getArea() const {
    int width = itsright - itsleft;
    int height = itstop - itsbottom;
    return width * height;
};

int main(){
    Rectangle myrectange(100,20,50,80);
    int Area = myrectange.getArea();
    cout<<"Area  = "<<Area <<endl;
    cout<<"Upper left X coordinate = "<< myrectange.getLowerLeft().GetX()<<endl;
    return 0;
}