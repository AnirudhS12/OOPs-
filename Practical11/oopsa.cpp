#include <iostream>
using namespace std ; 

class Base{
	public: 
	int x ;
	int y ;
	
};

class Child : public Base{

	public :
	
	void display()
	{
		x=10;
		y=20;

		cout<<x<<endl<<y<<endl;
	}
};

int main()
{
	Child obj1;
	
	obj1.display();

	return 0;
}
