#pragma once
#include <string>
class Teacher
{
private:
	std::string _name;

public:
	Teacher(std::string name); //constructor
	~Teacher();

	std::string GetName();
};

