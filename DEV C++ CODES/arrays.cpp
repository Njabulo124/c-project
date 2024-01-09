#include<iostream>
using namespace std;

int main()
{
	int arr[5]={1,2,3,4,5};
	int sum=0;
	int n=5;
	int avg;
	for(int i=0; i<=5; i++)
	{
		sum+=arr[i];
	}
	
	avg=sum/n;
cout<<"THE AVERAGE IS "<<avg<<endl;

}
