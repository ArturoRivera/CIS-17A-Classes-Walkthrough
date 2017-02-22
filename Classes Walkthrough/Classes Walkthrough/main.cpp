#include "student.h"
#include <iostream>
using namespace std;
int main()
{
	Student art = Student("Arturo");
	cout << art.GetName() << endl;

	getchar();
	return 0;
}