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

class B : protected A{
	public: 
	void display()
	{
		x= 10 ;
		y= 20 ;
	//      z= 30 ; // This line will produce error
		
		cout << "x= " << x << endl ;
		cout << "y= " << y << endl ;
	//	cout << "z= " << z << endl ; // This linewill produce error
	} 
};

int main()
{
	B obj; 
//	obj.x = 100 ;   // This line will produce error
//	obj.y = 200 ;   // This line will produce error
//	obj.z = 300 ;   // This line will produce error
	obj.display();

}
