#include<iostream>
using namespace std;

struct tripTime
{
	int hr;
	double min;
	int sec;
};

struct tripType
{
	string cityname;
	int  distance;
	tripTime Traveltime;
	
};

void insertdata(tripType&tri)
{
	cout<<"ENTER UR TRIP"<<endl;
	cin>>tri.cityname;
	cout<<"insert distance"<<endl;
	cin>>tri.distance;
	cout<<"INSERT ARRIVAL TIME"<<endl;
	cin>>tri.Traveltime.hr;
	cin>>tri.Traveltime.min;
	cin>>tri.Traveltime.sec;
}
void print(tripType trip)
{
	cout<<"MY DESTINATION IS "<<trip.cityname<<endl;
	cout<<"I TRAVELLED FOR "<<trip.distance<<"km"<<endl;
	cout<<"I ARRIVED AT "<<trip.Traveltime.hr<<"hours : "<<trip.Traveltime.min<<"minutes : "<<trip.Traveltime.sec<<"seconds"<<endl;
}

int main()
{
	
    tripType Destination;
	insertdata(Destination);
	print(Destination);
}
	
	
	



