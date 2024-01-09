#include<iostream>
using namespace std;
class Vfunction
{
public:
 virtual void printdata()
 {
 cout<<"print my virtual function please compiler!!!!"<<endl;
 }
};




class Vfunction2 :public Vfunction
{
 public:
 void printdata()
 {
 cout<<"I am a virtual finction"<<endl;
 }
 
};
int main()
{
	Vfunction2 obj;
	Vfunction* ptr=&obj;
	ptr->printdata();
	

}


