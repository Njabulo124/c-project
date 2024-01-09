#include<iostream>
using namespace std;

class Date
{
public:
	int Day;
	int Month;
	int Year;
	Date(int day,int month,int year);
};

class OopResults
{
public:
	string StudentName;
	int StudentNO;
	int Marks[3];
	int ExaminationDate;
	int n=3;
	int sum=0;
	int avg=0;
	void PrintDate();
	void PrintSemesterMark();
	
	
	
};
