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
	
}
void print(int c,int d){
	c=14;
	d=16.6;
	cout<<"u="<<c<<endl;
	cout<<"w="<<d<<endl;
};
xClass ();
xClass (int, double);

};

int main()
{
	xClass C;
	C.void print();
	return 0;
}
