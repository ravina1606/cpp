#include <iostream>
using namespace std;
class Date{
        int day;
        int month;
        int year;
public: Date(){
        day=1;
        month=1;
        year=1;
}
Date(int a,int b,int c){
    day=a;
    month=b;
    year=c;
}

public: void displayInfo()
{
cout<<day<<"/"<<month<<"/"<<year<<endl;
}
};
int main()
{
int dd,mm,y;
cout<<"enter the day :"<<endl;
cin>>dd;
cout<<"enter the month :"<<endl;
cin>>mm;
cout<<"enter the year :"<<endl;
cin>>y;

Date d1;
Date d2(2,5,2024);
Date d3(dd,mm,y);
d1.displayInfo();
d2.displayInfo();
d3.displayInfo();
return 0;
}
