#include<iostream>
using namespace std;

class A{
	public:
	int x;
	
	protected:
	int y;

	private:
	int z;

};

class B : public A{
	public: 
	void display()
	{
		x= 10 ;
		y= 20 ;
	//      z= 30 ;  This line will produce error
		
		cout << "x= " << x << endl ;
		cout << "y= " << y << endl ;
	//	cout << "z= " << z << endl ; This linewill produce error
	} 
};

int main()
{
	B obj;
	obj.display();

}
