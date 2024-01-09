#include<iostream>
#include"Header.h"
using namespace std;

int main()
{
	OopResults a2;
	a2.PrintSemesterMark();
	cout<<endl<<endl<<endl;
	cout<<"STUDENT NAME 	:  	"<<a2.StudentName<<endl;
	cout<<endl;
	cout<<"STUDENT NUMBER	: 	"<<a2.StudentNO<<endl;
	cout<<endl;
	cout<<"Date		:	";
	Date a1=Date(04,11,2022);
	cout<<endl;
	cout<<"AVERAGE IS	:	"<<a2.avg<<endl;
	cout<<endl;
	if(a2.avg>=40)
	{
		cout<<"STUDENT QUALIFIES FOR EXAMINATION"<<endl;
	}
	else
	{
		cout<<"STUDENT DO NOT QUALIFY FOR EXAMINATION"<<endl;
	}
}
