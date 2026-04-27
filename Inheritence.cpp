#include<iostream>
using namespace std;

class Vehicle
{
public:
    int speed;
    void showSpeed()
    {
        cout<<"Speed: "<<speed<<endl;

    }
};

class Car : public Vehicle
{
public:
    string brand;
};

int main()
{
    Car c1,c2;
    c1.brand="Tata";
    c1.speed=140;

    cout<<"Brand: "<< c1.brand<<endl;
    c1.showSpeed();
    cout<<"Enter brand ,speed: ";
    cin>>c2.brand>>c2.speed;
    cout<<"Brand: "<< c2.brand<<endl;
    c2.showSpeed();
    return 0;
}
