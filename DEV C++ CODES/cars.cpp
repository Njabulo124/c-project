#include<iostream>
using namespace std;

class car
{
private:
	string Color;
	int Tiresize;
	string Name;
	
public:
	/*car()
	{
		Color=""
		Tiresize= 0;
		Name="";
	}*/
	car(string color,string name,int tiresize)
	{
		Name=name;
		Color=color;
		Tiresize=tiresize;
		
	}
	void setName(string name)
	{
		Name= name;
	}
	string getName()
	{
		return Name;
	}
	
	void setColor(string color)
	{
		Color=color;
	}
	string getColor()
	{
		return Color;
	}
	
	void setTiresize(int tiresize)
	{
		Tiresize=tiresize;
	}
	int getTiresize()
	{
		return Tiresize;
	}
};


int main()
{
	car n1("white","isuzu",0);
	n1.setTiresize(14);
cout<<"color "<<n1.getColor()<<endl;
cout<<"name "<<n1.getName()<<endl;
cout<<"tiresize is "<<n1.getTiresize();
}

