#include<iostream>
using namespace std;
class item
{
	private:
		int ic,qty;
		string inm;
		float pr;
		
	public:
	     void getitem()
		 {
		 	cout<<"enter the code of item:"<<endl;
		 	cin>>ic;
			cout<<"enter the name of item"<<endl;
		 	cin>>inm;
		 	cout<<"enter the quantity of item"<<endl;
		 	cin>>qty;
		 	cout<<"enter the price of item"<<endl;
		 	cin>>pr;
		 	
		  } 
		  void showitem()
		  {
		  	cout<<"Ic :"<<ic<<endl;
		  	cout<<"Item name:"<<inm<<endl;
		  	cout<<"Quantity of item"<<qty<<endl;
		  	cout<<"Price of item"<<pr<<endl;
		  	
		  }
};
int main()
{
	int i;
	item obj[5];
	for(i=0;i<5;i++)
	{
		obj[i].getitem();
	}	
	for(i=0;i<5;i++)
	{
		obj[i].showitem();
	}

	return 0;
	
}