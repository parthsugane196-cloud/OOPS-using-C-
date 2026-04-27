#include<iostream>
using namespace std;
class student
{
 public:
     string name;
     int id;
     float marks;
     void display()
     {
      cout<<"Name: "<<name<<endl;
      cout<<"id: "<<id<<endl;
      cout<<"marks: "<<marks<<endl;
     }
     };
int main()
{
 student s1,s2;

 s1.name="Parth";
 s1.id=150;
 s1.marks=9;
 s1.display();
 cout<<"Enter student name , id, marks :  ";
 cin>>s2.name>>s2.id>>s2.marks;
 s2.display();
 return 0;
}
