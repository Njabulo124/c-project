#include<iostream>
using namespace std;

class Employee
{
public:
	string Firstname;
	string Lastname;
	int Age;
	
	Employee(string name,string first,int age)
	{
		Firstname=name;
		Lastname=first;
		Age=age;	
	}
	
	void print()
	{
		cout<<"MY NAME IS "<<Firstname<<endl;
		cout<<"MY SURNAME IS "<<Lastname<<endl;
		cout<<"MY AGE IS "<<Age<<endl;
	}
};

class Salary
{
public:
	int Monthlysalary;
	int Yealrysalary;
	Salary(int monthly)
	{
		Monthlysalary=monthly;
	}
	void out()
	{   
		cout<<"MY MONTHLY SALARY "<<Monthlysalary<<endl;
		cout<<"MY GROSS INCOME IS "<<Monthlysalary*12<<endl;
	}
};

class Profile:public Employee, public Salary{
public:
	string Cow;
	Profile(string name,string first,int age,int monthly,string cow):Employee(name,first,age),Salary(monthly)
	 {
	 	Cow=cow;
	 }
	void outputdata()
	{
		cout<<"MY NAME IS "<<Firstname<<endl;
		cout<<"MY SURNAME IS "<<Lastname<<endl;
		cout<<"MY AGE IS "<<Age<<endl;
		cout<<"MY MONTHLY SALARY "<<Monthlysalary<<endl;
		cout<<"MY GROSS INCOME IS "<<Monthlysalary*12<<endl;
		cout<<"cowza :  "<<Cow<<endl;
	}
};

int main()
{
	Employee obj("NJABULO","MDUNJANA",20);
	obj.print();
	Salary s1(1500);
	s1.out();
	cout<<endl<<endl;
	Profile obj3("nnn","jjjjjj",20,1500,"mooooh");
	
	obj3.outputdata();
	
}
