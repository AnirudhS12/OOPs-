#include<iostream>
#include<fstream>
#include<ios>
#include<string>
using namespace std;
int main()
{
    //write to a file
    fstream fp;
    fp.open("task2.txt",ios::out);
    fp<<"Hello Wolrd!!";
    fp.close();
    //append in a file
    fp.open("task2.txt",ios::app);
    fp<<"Always be happy";
    fp.close();
    //read from a file
    fp.open("task2.txt",ios::in);
    char ch;
    while(!fp.eof())
    {
        fp>>noskipws>>ch;
        cout<<ch;
    }
    fp.close();
}