#include<iostream>
#include<string.h>
using namespace std;
main()
{
	string s="happy";
	//substr()
	string y;
	y=s.substr(2,3);
	cout<<y<<endl;
	
	//find()
	int c=s.find("ha");
	cout<<c<<endl;
	int d=s.find("ha",4);
	cout<<d<<endl;
	
	//find_first_of()
	int e=s.find_first_of("p");
	cout<<e<<endl;
	int f=s.find_last_of("p");
	cout<<f<<endl;
	
	//at()
	cout<<s.at(1);
}
