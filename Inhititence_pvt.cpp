#include<iostream>
using namespace std;
class Base{
 protected:
     int x;

     void setData(int a)
     {
         x=a;
     }
     int getData()
     {
         return x;
     }
};

class Derived : public Base
{
public:
    void display()
    {
        cout<<"Value= "<<getData()<<endl;
    }
};

int main(){
 Derived d;
 d.setData(25);
 d.display();
}
