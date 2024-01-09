#include<iostream>
using namespace std;

class House
{
public:
	virtual void types()
	{
		cout<<"I LIVE IN AN ESTATE"<<endl;
	}
};

class Shark:public House
{
public:
	void types()
	{
		cout<<"I live in suburbs"<<endl;
	}
};

int main()
{
	House* n1=new Shark;
	n1->types();
	/*House* n2=new House;
House*house[2]={n1,n2};
	for(int n=0; n<2;n++)
	
      house[n]->types();
	*/
	
	}
