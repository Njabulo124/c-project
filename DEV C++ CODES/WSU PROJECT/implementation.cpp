#include"Header.h"

Date ::  Date(int day,int month,int year)
{
	Day=day;
	Month=month;
	Year=year;
	cout<<Day<<"/"<<Month<<"/"<<Year<<endl;
}

void OopResults :: PrintSemesterMark()
{
	cout<<"ENTER NAME"<<endl;
	cin>>StudentName;
	cout<<"ENTER STUDENT NUMBER"<<endl;
	cin>>StudentNO;
	cout<<"ENTER FIRST ASSESSMENT"<<endl;
	cin>>Marks[0];
	cout<<"ENTER SECOND ASSESSMENT"<<endl;
	cin>>Marks[1];
	cout<<"ENTER THIRD ASSESSMENT"<<endl;
	cin>>Marks[2];
	
	for(int i=0; i<3; i++)
	{
		sum+=Marks[i];
	}
	avg=sum/n;
	

	
}

