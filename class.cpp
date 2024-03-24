#include <iostream>
using namespace std;
class Box{
      int height;
      float width;
      int length;

public: Box(){ //default constructor
height=1;
width=1;
length=1;
}

 Box(int a){ //parameterized constructor with 1 parameter
 height = width = length = a;
}
 Box(int a, int b){ //parameterized constructor with 2 parameter
 height = width = a;
 length = b;
}

Box(int a, int b, int c){ //parameterized constructor with 3 parameter
 height = a;
 length = b;
 width = c;
}


~Box(){ //destructor
cout<<"memory is deallocated";
}
public: void displayInfo()
{
cout<<height<<endl;
cout<<width<<endl;
cout<<length<<endl;
}

};
int main()
{
Box b1;
Box b2(4);
Box b3(5,7);
Box b4(8,9,3);
b1.displayInfo();
b2.displayInfo();
b3.displayInfo();
b4.displayInfo();


return 0;

}


















