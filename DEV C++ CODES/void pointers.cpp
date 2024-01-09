#include<iostream>
using namespace std;

int main()
{
	int a = 15;
	
	void *p=&a;
	
	cout<<*(int*)p<<endl;
}
