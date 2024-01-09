#include <iostream>
using namespace std;

class Animals
{
	public:
	void Animalsound()
	{
		cout<<"DIFFRENT SOUNDS OF ANIMALS  "<<endl;
	}
};

class Dog
{	public:
	
	void Animalsound()
	{
		cout<<"huhuhuhu"<<endl;
	}
};

class cat: public Animals
{	
public:
	
	void Animalsound()
	{
		cout<<"nwe nwe nwe nwe nwe nwe "<<endl;
	}
};

class Snake: public Animals
{	public:
	
	void Animalssound()
	{
		cout<<"sisisisisisi"<<endl;
	}
};

int main()
{
	Animals A1;
	Dog A2;
	cat A3;
	Snake A4;
	A1.Animalsound();
	A2.Animalsound();
	A3.Animalsound();
	A4.Animalsound();
	
}
