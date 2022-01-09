#include<iostream>
using namespace std;
class base
{
	private:
	int *a;
	public:
	base()
	{
		a=new int;
		cout<<"Base class constructor invoked"<<endl;
	}
	~base()
	{
		delete a;
		cout<<"Base class destructor invoked"<<endl;
	}
};
class child:public base
{
	public:
	child()
	{
		cout<<"Child class constructor invoked"<<endl;
	}
	~child()
	{
		cout<<"Child class destructor invoked"<<endl;
	}
};
int main()
{
	base *p;
	child a;
	p=&a;
	delete p;
}