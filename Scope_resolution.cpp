#include<iostream>
using namespace std;

class Vehicle
{
public:
    int speed;
    void showSpeed();
};
void Vehicle::showSpeed()
    {
        cout<<"Speed: "<<speed<<endl;

    }
class Car : public Vehicle
{
public:
    string brand;
};

int main()
{
    Car c2;
    cout<<"Enter brand ,speed: ";
    cin>>c2.brand>>c2.speed;
    cout<<"Brand: "<< c2.brand<<endl;
    c2.showSpeed();
    return 0;
}
