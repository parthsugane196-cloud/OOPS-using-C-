#include<iostream>
#include<string>

using namespace std;

int main(){
 string str1 = "Hello ";
 string str2 = "Shashank";
 string result = str1 + str2;//concatenate
 cout<<result<<endl;
 str2.append("C div");
 string str3 = str1+", C++!";
 cout<< str3<<+ " ECE"<<endl;
 string str4;
 cout<< str4<<+" KLE Tech." <<endl;

 return 0;
}
