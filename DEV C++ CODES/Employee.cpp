#include<iostream>
using namespace std;

class Employee
{
private:
	string Firstname;
	string Lastname;
	int Monthlysalary;
public:
	Employee(string name,string last,int salary)
	{
		Firstname= name;
		Lastname=last;
		Monthlysalary=salary;
	}
	void setFirstname(string first)
	{
		Firstname=first;
	}
	string getFirstname()
	{
		return Firstname;
	}
	
	void setLastname(string last)
	{
		Lastname=last;
	}
	string getLastname()
	{
		return Lastname;
	}
	
	void setMothlysalary(int salary)
	{ 
		Monthlysalary=salary;
		
	}
	
	int getMonthlysalary()
	{ 
		if(Monthlysalary<0){Monthlysalary=0;}
	
		return Monthlysalary*12;
	}
	
};

int main()
{
	Employee emp1("NJABULO","MDUNJANA",3000);
    Employee emp2("siphokazi","mbhele",1500);
	cout<<"Employee 1: "<<emp1.getFirstname()<<" "<<emp1.getLastname()<<" "<<"Yearly salary: R"<<emp1.getMonthlysalary()<<endl;
	cout<<"Employee 2: "<<emp2.getFirstname()<<" "<<emp2.getLastname()<<" "<<"Yearly salary: R"<<emp2.getMonthlysalary()<<endl<<endl;
	
	cout<<"Increasing employee salaries by 10%"<<endl<<endl; 
	float raise=emp1.getMonthlysalary()+emp1.getMonthlysalary()*0.1;
	float increase=emp2.getMonthlysalary()+emp2.getMonthlysalary()*0.1;
	cout<<"Employee 1: "<<emp1.getFirstname()<<" "<<emp1.getLastname()<<" "<<"Yearly salary: R"<<raise<<endl;
	cout<<"Employee 2: "<<emp2.getFirstname()<<" "<<emp2.getLastname()<<" "<<"Yearly salary: R"<<increase<<endl;
	
	
}
