#include <iostream>
using namespace std;

class vehicle
{
public:
    void TyreCount()
    {
        cout << "vehicles has tyres ";
    }
} vehicle1;
class car : public vehicle
{
public:
    void TyreCount()
    {
        cout << "car has 4 tyres";
    };
} car1;
class bike : public vehicle
{
public:
    void TyreCount()
    {
        cout << "bike has 2 tyres ";
    }
} bike1;

int main()
{
    cout << "tyre fuction of vehicle base class DISPLAYS  ";
    vehicle1.TyreCount();
    cout << endl;
    cout << "tyre fuction of car class derived class  base class vehicle DISPLAYS  ";
    car1.TyreCount();
    cout<<endl;
    cout << "tyre fuction of bike class derived from  base class VEHICLE DISPLAYS  ";
    bike1.TyreCount();
}