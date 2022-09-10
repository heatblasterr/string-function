#include<iostream>
#include<string.h>
using namespace std;
main()
{
	string s1="rat hat mat cat vat";
	cout<<s1<<endl;
	string s2;
	s2=s1.find("cat");
	
	string s3;
	s3=s1.find("mat");
	
	string s4="cat";
	s1.insert(12,s4);
}
