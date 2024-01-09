#include<iostream>
using namespace std;

class StudentType{
	
	private :
	int studentNumber;
	string Name;
	string Surname;
	public :
	StudentType();
	StudentType(int,string,string);
	void setStudentNumber(int);
	int getStudentNumber() const ;
	void setName(string);
	string getName();
	void setSurname(string);
	string getSurname();
	void printdetails();
	
};
