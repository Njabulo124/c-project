#include<iostream>
using namespace std;
#include"StudentType.h"
/*
returnType className :: functionName{

statements

}

*/
StudentType :: StudentType(){
	
studentNumber = 0;	
cout << " I m default constructor  I get called when you declare object " << endl ;

}

StudentType :: StudentType(string nam,string surnam,int s){
	
studentNumber = s;
cout << " I m parameter constructor  I get called when you declare object " << endl ;
		
}

void StudentType :: setStudentNumber(int s){
	studentNumber = s;
}

int StudentType :: getStudentNumber() const{
    return  studentNumber;
}

void StudentType :: setName(string nam)
{
	Name=nam;
}
string StudentType :: getName()
{
	return Name;

}

void StudentType :: setSurname(string surnam)
{
	Surname=surnam;
}

string StudentType :: getSurname() const
{
	return Surname;
}

void StudentType :: printdetails()
{
	cout << "MY STUDENT NUMBER IS :"<< getStudentNumber() <<endl;
	cout << "MY NAME IS :"<< getName() <<endl;
	cout << "MY SURNAME IS: "<<getSurname() <<endl;
}

