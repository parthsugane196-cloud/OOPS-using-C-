#include<iostream>
using namespace std;
class Student
{
  public:
      int id;
      string name;
      void display()
      {
          cout<<"ID: "<<id<<endl;
          cout<<"Name: "<<name<<endl;
      }
};

int main()
{
    Student s1,s2,s3;        // Creating object

    s1.id = 212;N
    s1.name = "Romil Sinha \n";

    s1.display();
    s2.id = 95;
    s2.name = "Vishal Angadi \n";
    s2.display();
    s3.id = 193;
    s3.name = "Ravi Gawade \n ";
    s3.display();

    return 0;
}
