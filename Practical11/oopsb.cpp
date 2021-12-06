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
		cout<<x<<endl<<y<<endl;
	}
};

int main()
{
	Child obj1;
	obj1.x=20;
	obj1.y=50;
	obj1.display();

	return 0;
}
