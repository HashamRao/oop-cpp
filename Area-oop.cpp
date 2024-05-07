#include<iostream>
using namespace std;

class Shape{
    public:
    double width;
    double length;
  
   void setdim(){
        cout<<"enter width of the rectangle"<<endl;
        cin>>this->length;
        cout<<"enter width of the rectangle"<<endl;
        cin>>this->width;
    }


    double Area(double width, double length ){
        int area=0;
        return area;
    };
};
class rectangle : public Shape{

    double Area(double width, double length ){
        int area=length*width;
        return area;
    };
};
class triangle : public Shape{

    double Area(double width, double length ){
        int area=0.5*length*width;
        return area;
    };
 };

