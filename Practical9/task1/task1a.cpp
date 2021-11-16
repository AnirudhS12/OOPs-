#include<iostream>
#include<string>
using namespace std;
class student{
	public:
		int rollno;
		int mobile;
		string address;
};
int main()
{
	student ben,john;
	ben.rollno=12;
	ben.mobile=9720772;
	ben.address="delhi";

    cout<<"Ben rollno :"<<ben.rollno<<endl;
	cout<<"Ben mobile :"<<ben.mobile<<endl;
	cout<<"Ben address :"<<ben.address<<endl;
	
	john.rollno=13;
	john.mobile=1234569;
	john.address="dehradun";

    cout<<"John rollno :"<<john.rollno<<endl;
	cout<<"John mobile :"<<john.mobile<<endl;
	cout<<"John address :"<<john.address<<endl;

    return 0;
}
