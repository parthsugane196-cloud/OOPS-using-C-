#include<iostream>
using namespace std;

class Time{
int hour,minute,second;
public:
void addTime(Time x,Time y);
void getTime(){
cout<<"\nEnter hours:";cin>>hour;
cout<<"\nEnter minutes:";cin>>minute;
cout<<"\nEnter seconds:";cin>>second;
}
void printTime(){
cout<<"\nHour:"<<hour;
cout<<"\nMinute:"<<minute;
cout<<"\nSecond:"<<second;
}
};

void Time::addTime(Time x,Time y){
hour=x.hour+y.hour;
minute=x.minute+y.minute;
second=x.second+y.second;
}

int main(){
Time t1,t2,t3;
t1.getTime();
t2.getTime();
t3.addTime(t1,t2);
cout<<"\nSum:";
t3.printTime();
return 0;
}
