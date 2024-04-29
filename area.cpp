include<iostream>
using namespace std;
class area{
    public:
    int length;
    int breadth;

    void setdim(){
        cout<<"enter width of the rectangle"<<endl;
        cin>>this->length;
        cout<<"enter breadth of the rectangle"<<endl;
        cin>>this->breadth;
    }
    double getarea(){
        return length*breadth;
    }
};

int main(){
    area r1;
      r1.setdim();
     cout<<"the area of rectangle is" <<r1.getarea()2<<endl;
     return 0;

}