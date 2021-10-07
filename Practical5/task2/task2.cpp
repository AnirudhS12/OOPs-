#include <iostream>
using namespace std;

void charfunc()
{
	char c = 'g' ;
	cout<<c<<endl;
	cout<<sizeof(c)<<endl;
	cout<<"Size of char is : "<<sizeof(char)<<endl;
}

void boolfunc()
{
	bool a = (10 > 9 ) ;
	cout<<a<<endl;
	cout<<sizeof(a)<<endl;
	cout<<"Size of char is : "<<sizeof(bool)<<endl;
}

void shortfunc()
{
	short a = 100;
	cout<<a<<endl;
	cout<<sizeof(a)<<endl;
	cout<<"Size of char is : "<<sizeof(short)<<endl;
}

void intfunc()
{
	int a = 10 ;
	cout<<a<<endl;
	cout<<sizeof(a)<<endl;
	cout<<"Size of char is : "<<sizeof(int)<<endl;
}

void longfunc()
{
	long a = 12 ;
	cout<<a<<endl;
	cout<<sizeof(a)<<endl;
	cout<<"Size of char is : "<<sizeof(long)<<endl;
}

void floatfunc()
{
	float x = 10.f ;
	cout<<x<<endl;
	cout<<sizeof(x)<<endl;
	cout<<"Size of char is : "<<sizeof(float)<<endl;
}

void doublefunc()
{
	double y = 10.23 ;
	cout<<y<<endl;
	cout<<sizeof(y)<<endl;
	cout<<"Size of char is : "<<sizeof(double)<<endl;
}

void longdoublefunc()
{
	long double a = 10.5l;
	cout<<a<<endl;
	cout<<sizeof(a)<<endl;
	cout<<"Size of char is : "<<sizeof(long double)<<endl;
}

void widecharfunc()
{
	wchar_t a = L'0' ;
	cout<<a<<endl;
	cout<<sizeof(a)<<endl;
	cout<<"Size of char is : "<<sizeof(wchar_t)<<endl;
}

int main()
{
	charfunc();
	boolfunc();
	int func();
	longfunc();
	floatfunc();
	doublefunc();
	longdoublefunc();
	widecharfunc();
}





