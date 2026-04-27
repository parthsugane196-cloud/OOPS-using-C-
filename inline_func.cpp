#include<iostream>
using namespace std;
inline double cube(double s){
  return s*s*s;
}

int main(){
 cout << "The cube of 3 is: "<<cube(3)<<endl;
 cout << " The cube of 4.75 is: "<< cube(4.750)<< endl;
 return 0;
}
