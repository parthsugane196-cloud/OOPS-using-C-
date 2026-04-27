#include<istream>

class Add{
 public:
      int a,b,sum;

      void calculate(){
       sum =a + b;
      }
};

int main(){
 Add obj;

 cout<<"Enter two numbers: ";
 cin>>obj.a>>obj.b;

 obj.calculate();

 cout<<"Sum="<<obj.sum;
 return 0;
}
