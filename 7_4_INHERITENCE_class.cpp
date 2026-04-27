/*cpp to demonstrate single ,multiple and multi-level inheritence*/

#include <iostream>
using namespace std;

/* ----------- SINGLE INHERITANCE ----------- */
class Vehicle {
public:
    void displayVehicle() {
        cout << "Class VEHICLE function\n";
    }
};

class Car : public Vehicle {
public:
    void displayCar() {
        cout << "Class CAR function (Single Inheritance)\n";
    }
};


/* ----------- MULTILEVEL INHERITANCE ----------- */
class Tata : public Car {   // C inherits B → B inherits A
public:
    void displayTata() {
        cout << "Class TATA function (Multilevel Inheritance)\n";
    }
};


/* ----------- MULTIPLE INHERITANCE ----------- */
class Engine{
 public:
     void displayEngine()
     {
     cout<<"V12 Engine\n";
     }
};
class colour{
public:
    void displaycolour()
    {
    cout<<"RED colour\n";
    }
};
class Mahindra : public Engine, public colour
{
public:
    void displayMahindra() {
        cout << "Class Mahindra function (Multiple Inheritance)\n";
    }
};


int main() {
    cout << "---- Single Inheritance ----\n";
    Car obj1;
    obj1.displayVehicle();
    obj1.displayCar();

    cout << "\n---- Multilevel Inheritance ----\n";
    Tata obj2;
    obj2.displayVehicle();
    obj2.displayCar();
    obj2.displayTata();

    cout << "\n---- Multiple Inheritance ----\n";
    Mahindra obj3;
    obj3.displayEngine();
    obj3.displaycolour();
    obj3.displayMahindra();

    return 0;
}
