#include<iostream>
using namespace std;

int main()
{
	
int x, y, z;
int *p1, *p2, *p3;
p1 = &x; p2 = &y; p3 = &z;
*p1 = 45; *p2 = 12; *p3 = 8;
cout << "x=" << x << ", y=" << y << ", z=" << z << endl;
p2 = p1; p1 = &z; p3 = &y;*p1 = 4; *p3 = *p3 - 1;
cout << "x=" << x << ", y=" << y << ", z=" << z << endl;
*p3 = *p1 + *p2;
p1 = p2;
*p1 = *p1 + 9; *p2 = *p2 - 1;
cout << "x=" << x << ", y=" << y << ", z=" << z << endl;
}
