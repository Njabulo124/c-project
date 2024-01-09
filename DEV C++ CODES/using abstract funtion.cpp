#include <iostream>
using namespace std;

class numbers
{
private:
	int a,b,c;
public:
	void sum(int x,int y)
	{
		a=x;
		b=y;
		c=a+b;
		
		cout<<"THE SUM OF TWO NUMBERS IS "<<c<<endl;
	}
};

int main()
{
	numbers n;
	n.sum(12,14);
}
