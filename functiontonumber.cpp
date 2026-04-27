#include<iostream>

using namespace std;
int addition(int a, int b){
 int sum;
 sum=a+b;
 return sum;
}

int main(){
 int a, b,s;
 cout<<"Enter values of a , b : ";
 cin>>a>>b;
 s=addition(a,b);
 cout<<"Sum of "<<a<<" and "<<b <<" is "<<s;
 return 0;

}


