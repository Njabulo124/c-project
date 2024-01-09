#include <iostream>
using namespace std;

int main()
{
	int* p;
	int* q;
    p=new int;
    *p=43;
    q=p;
    *q=52;
    p=new int;
    *p=78;
    p=new int;
    *q=*p;
    cout<<*q<<"   "<<*p<<endl;
    
}
