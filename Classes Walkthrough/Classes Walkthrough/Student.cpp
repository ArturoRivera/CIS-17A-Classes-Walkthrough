#include "Student.h"
using namespace std;

Student::Student() //constructor without parameters is a default constructor
{
	_name = "Null";
}


Student::Student(string name) // can also use _name(name) 
{
	_name = name; //name of the object is going to equale the name that gets passed in
	
}


Student::~Student()
{
}

std::string Student::GetName()
{
	return _name;
}
