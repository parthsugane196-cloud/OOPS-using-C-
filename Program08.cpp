/* c++ prg to create on bjects with the help of default ,paarmeterized , copy function*/

 #include <iostream>
using namespace std;

class Rectangle {
    int l,b;

public:
    // Default Constructor
    Rectangle() {
        int l=0,b=0;
        cout << "Default Constructor called. l = " << l<<" b = "<<b << endl;
    }

    // Parameterized Constructor
    Rectangle(int x,int y) {
        l=x;
        b=y;
        cout << "Parameterized Constructor called. l = " << l<<" b = "<<b << endl;
    }

    // Copy Constructor
    Rectangle(Rectangle &obj) {
        l = obj.l;
        b = obj.b;
        cout << "Copy Constructor called. l = " << l<<" b = "<<b << endl;
    }

    void display() {
        cout << "Value of l = " << l<<" b= "<<b << endl;
    }
};

int main() {
    // Default constructor
    Rectangle obj1;

    // Parameterized constructor
    Rectangle obj2(10,20);

    // Copy constructor
    Rectangle obj3 = obj2;

    cout << "\nDisplaying values:\n";
    obj1.display();
    obj2.display();
    obj3.display();

    return 0;
}
