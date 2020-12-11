#pragma once
#include <string>

class CPerson
{
protected:
	std::string name;
	std::string vorname;
	unsigned int alter;

public:
	CPerson(std::string name, std::string vorname, unsigned int alter);
	void print();
};