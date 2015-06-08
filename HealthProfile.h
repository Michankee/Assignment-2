/*
* HealthProfile.h
* HealthProfile class definition. This file represents HealthProfile's public
* interface without revealing implementations of HealthProfile's member function,
* whic are defined in HealthProfile.cpp
*
* Stub file for Programming Assignment #2
*
* Name: Enang, Emmanuel Eta
* Matric No: 14/095244039
* Department: Computer Science
*
*/

#include <string>		//uses C++ string class
using namespace std;

class HealthProfile		//HealthProfile class definition
{

public:
	HealthProfile( string, string, string, int, int, int, int, double, int, int, int );
	int getAge();
	double getBMI();
	int getMaximumHeartRate();
	double getTargetHeartRate();
	void getInformation();
	
	int setAge(string);	
	int getAge(string);
	double setBMI(string);
	double getBMI(string);
	int getMaximumHeartRate(string);
	int getMaximumHEartRate();
	
private:
	string firstName;		// variable to hold firstName
	string lastName;		// variable to hold lastName
	string gender;			// variable to hold gender
	int month;				// variable to hold integer
	int day;				// variable to hold day
	int year;				// variable to hold year
	double height;			// variable to hold height
	int weight;				// variable to hold weight
	int age;				// variable to hold age
	
}; //end class HealthProfile
