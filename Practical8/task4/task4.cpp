#include<iostream>
using namespace std;
int main()
{
	int n,fact=1;
	cout<<"Enter a number :";
	cin>>n;
	while(n>1)
	{
		fact=fact*n;
		n--;
	}
	cout<<"Factorial of given number is "<<fact<<endl;
return 0;
}
