#include<iostream>
using namespace std;

class Document
{
private:
	string Name;
	string Surname;
	string Dateofbirth;
public:
	
	Document(string name,string surname,string ofbirth)
	{
		Name=name;
		Surname=surname;
		Dateofbirth=ofbirth;
	}
	void setName(string name)
	{
		Name=name;
	}
	string getName()
	{
		return Name;
	}
	
	
   void setSurname(string surname)
   {
   	Surname=surname;
   }
   string getSurname()
   {
   	return Surname;
   }
   
   void setDateofbirth(string ofbirth)
   {
   	Dateofbirth;
   }
   string getDateofbirth()
   {
   	return Dateofbirth;
   }
   
   };
   
   class citizen1:public Document
   {
   	public:
   		citizen1(string name,string surname,string ofbirth):Document(name,surname,ofbirth)
		   {
		   
		   }
		   
   	void citizenship()
	   {
	   	cout<<"i am a SOUTH AFRICAN CITIZEN"<<endl;
	   }
   };


class citizen2:public Document
{
	public:
		public:
			int a =6;
			int b= 9;
			
		
			citizen2(string name,string surname,string ofbirth):Document(name,surname,ofbirth)
		   {
		   
		   }
		   
		   void calculator()
		   {
		   	cout<<"ADDITION "<<a+b<<endl;
		   	cout<<"SUBTRACTION "<<b-a<<endl;
		   	cout<<"PRODUCT "<<a*b<<endl;
		   }
		
};
   
   int main()
   {
   	Document doc1=Document("NJABULO","MDUNJANA","11/12/1998");
   	cout<<"my name is "<<doc1.getName()<<endl;
   	cout<<"my surname is "<<doc1.getSurname()<<endl;
   	cout<<"DATE OF BIRTH "<<doc1.getDateofbirth()<<endl<<endl<<endl;

   	
   	citizen1 doc2("NJABULO","MDUNJANA","11/12/1998");
   	cout<<"my name is "<<doc2.getName()<<endl;
   	cout<<"my surname is "<<doc2.getSurname()<<endl;
   	cout<<"DATE OF BIRTH "<<doc2.getDateofbirth()<<endl;
   	doc2.citizenship();
   	cout<<endl<<endl<<endl;
   	
   	citizen2 doc3("ABAHLE","MDUNJANA","31/07/2002");
   	cout<<"my name is "<<doc3.getName()<<endl;
   	cout<<"my surname is "<<doc3.getSurname()<<endl;
   	cout<<"DATE OF BIRTH "<<doc3.getDateofbirth()<<endl;
   	doc3.calculator();
   }
