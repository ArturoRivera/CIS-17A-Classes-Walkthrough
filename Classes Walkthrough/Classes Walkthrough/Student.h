#pragma once
#include <string>	

class Student
{
private:
	std::string _name;
	std::string _destructer;

public:
	Student();
	//void SetName(std::string name); this can be used if the name will change... example uses mutable name
	Student(std::string name);
	~Student();

	std::string GetName();
};

