#include<iostream>
using namespace std;

class BB
{
	
			int x;
			int y;
		
		
		public:
			void print()const;
			void setData(int u,int v);
			
			
};

class AA: public BB
{
	int z;
	
	public:
		void setData(int a, int b, int c);
		void print()const;
};

void AA :: setData(int a, int b, int c)
{
	x=a;
	y=b;
	z=c;
	
}
void BB :: print()const{cout<<x<<y<<z;}
int main()
{
BB A1;
A1.setData(10,20,30);
A1.print();	
}

