#include<iostream>
using namespace std;

int main()
{
	int a=15;
	int b=45;
	
	int*p1=&a;
	int*p2=&b;
	
	cout<<*p1 <<"  "<<*p2<<endl<<endl;
	
	*p2=*p1+*p2;
	*p1=*p2-*p1;
	cout<<*p1<<"  "<<*p2<<endl;
	
}
