#include<iostream>
#include<string.h>
using namespace std;
main()
{
	string s1="rat hat mat cat vat";
	cout<<s1<<endl;
	
	int s2=s1.find("cat");
	cout<<s2<<endl;
	
	int s3=s1.find("mat");
	cout<<s3<<endl;
	
	string s4="cat ";
	s1.insert(12,s4);
	cout<<s1<<endl;
}
