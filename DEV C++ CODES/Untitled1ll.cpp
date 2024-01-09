#include<iostream>
using namespace std;
class xClass 
{ 
private: 
int u; 
double w; 
public: 
void func(int c,int d)
{
	u=c;
	w=d;
	cout<<"u="<<c<<endl;
	cout<<"w="<<d<<endl;
}
void print() const ;
xClass ();
xClass (int, double);

};

int main()
{
	xClass C;
	C.func(10,16.1);
	return 0;
}
