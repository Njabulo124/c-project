#include<iostream>
using namespace std;



class Student
{
private:
	string Name;
	string Applied_Maths;
	string Life_Skills;
	string Operating_system;
public:
	Student(string);
	void setName(string name);
	string getName();
	void setApplied_Maths(string AP);
	string getApplied_Maths();
	void setLifeSkills(string LS);
	string getLife_Skills();
	void setOperating_system(string OS);
	string getOperating_system();
	void getAverage();
	

};
