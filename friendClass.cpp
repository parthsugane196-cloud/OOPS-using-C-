#include<iostream>
using namespace std;
class base{
private :
    int x;
public:
    base()
    {
        x=5;
    }
    friend class derived;
};

class derived{
public:
    void display(base b)
    {
        cout<<"value= " << b.x<<endl;
    }
};

int main(){
 derived d;
 base b;
 d.display(b);
}
