#include<iostream>
using namespace std;

class ADDITION
{
	public:
	int ADD(int a, int b)
	{
		return a+b;
	}
	
	void ADD()
	{
		int c=17;
		int d=19;
		int product=c*d;
		
		cout<<"MY PRODUCT IS "<<product<<endl;
	}
};

int main()
{
	ADDITION A1;
	cout<<"MY ADDITION IS "<<A1.ADD(15,15)<<endl;
	A1.ADD();
}
