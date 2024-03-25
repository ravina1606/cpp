#include <iostream>
using namespace std;
class Date{
        int day;
        string month;
        int year;
public: Date(){
        day=1;
        month="JAN";
        year=1;
}
Date(int a,string b,int c){
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
int dd,y;
string mm;
cout<<"enter the day :"<<endl;
cin>>dd;
cout<<"enter the month :"<<endl;
cin>>mm;
cout<<"enter the year :"<<endl;
cin>>y;

Date d1;
Date d2(2,"MAR",2024);
Date d3(dd,mm,y);
d1.displayInfo();
d2.displayInfo();
d3.displayInfo();
return 0;
}
