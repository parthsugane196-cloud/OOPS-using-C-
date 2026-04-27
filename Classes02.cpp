#include<iostream>
using namespace std;
class car
{
 public:
     string name;
     string num;
     void display()
     {
      cout<<"Car Name: "<<name<<endl;
      cout<<"Car Number: "<<num<<endl;
     }
     };
int main()
{
 car c1,c2;

 c1.name="TATA";
 c1.num="KA 01 A8055";
 c1.display();
 cout<<"Enter Car name and num:  ";
 cin>>c2.name>>c2.num;
 c2.display();
 return 0;
}
