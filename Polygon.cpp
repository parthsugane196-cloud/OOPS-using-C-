#include<iostream>

using namespace std;

class rectangle
{
 public:
     float length, width;
     void display();

     };
float area(float length,float width);
void rectangle:: display()
{
      cout<<"Length: "<<length<<endl;
      cout<<"Width: "<<width<<endl;
     }

int main()
{
 float A;
 rectangle r1;
 r1.length=15;
 r1.width=10;
 r1.display();
 A=area(r1.length,r1.width);
 cout<<"Area : "<< A<<endl;
 return 0;
}

float area(float length,float width)
{
    float A;
    A=length*width;
    return A;
}
