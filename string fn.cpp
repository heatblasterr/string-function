//string manipulating fn
#include<iostream>
#include<string.h>
using namespace std;
main()
{
	string s1( "hello! do you wanna be mine");
	string s2("seaside ");
	string s3("we can vist ");
	
	//erase
	s1.erase(0,5);
	cout<<s1<<endl;
	
	//replace
	s1.replace(0,5,s2);
	cout<<s1<<endl;
	s1.replace(0,1, "S");
	cout<<s1<<endl;
	
	//insert
	s1.insert(0,s3);
	cout<<s1<<endl;
	
	//append
	s1.append(3,'!');
	cout<<s1;
}

