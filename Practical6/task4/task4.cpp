
#include<iostream>
#include<string>
using namespace  std;
int main()
{
       int x;
        string a;
        string b;
        getline(cin,a);
        getline(cin,b);
	
	int i = 0 ;	
	bool flag = true ;

	if( a.length() !=  b.length())
	{
		cout<<"Strings are not equal"<<endl;
		return 0;
	}       
	
	int s = a.size() ;	

	while( s ) 
	{
		if( a[i] != b[i] )
		{
			flag = false ;
			break;
		}
		i++;
		s--;
	}
	
	if(flag)
	{
		cout<<"Strings are equal"<<endl;
	}
	else 
	{
		cout<<"Strings are not equal"<<endl;
	}
        return 0;
    }
