#include "Course.h"
#include <string>
using namespace std;


Course::Course(string name, string description, Teacher teacher) 
	: _name(name), _description(description), _teacher(teacher)
{
}


Course::~Course()
{
}

bool Course::enrollStudent(Student newStudent, int position)
{
	if (position <= 9 && _students[position].GetName() == "Null") {
		_students[position] = newStudent; // when you enroll student you need to tell me what position in the array
		return true;
	}
	return false;
}