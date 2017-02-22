#include "student.h"
#include "Teacher.h"
#include <iostream>
#include "Course.h"
using namespace std;
int main()
{
	
	//Student art = Student("Arturo");
	//cout << art.GetName() << endl;

	
	//getchar();

	//Teacher james = Teacher("James");
	//cout << james.GetName() << endl;
	//getchar();
	Teacher james = Teacher("james");
	Course cis17 = Course("CIS17A", "Programming C++: Objects", james);
	Student art = Student("Arturo");
	Student bri = Student("Brianna");
	
	cis17.enrollStudent(art, 0);
	cis17.enrollStudent(bri, 1);
	getchar();
	return 0;
}