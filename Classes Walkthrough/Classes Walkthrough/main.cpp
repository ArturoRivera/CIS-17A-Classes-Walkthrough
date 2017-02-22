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
	Student sam = Student("Samantha");
	Student art = Student("Arturo");
	Student bri = Student("Brianna");
	Student jake = Student("Jake");
	Student christian = Student("Christian");
	
	cis17.enrollStudent(art, 0);
	cis17.enrollStudent(sam, 1);
	cis17.enrollStudent(jake, 2);
	cis17.enrollStudent(bri, 3);
	cis17.enrollStudent(christian, 4);

	cout << cis17.GetClassInfo() << endl;

	getchar();
	return 0;
}