#include "CPerson.h"
#include <iostream>
#include <string>

CPerson::CPerson(std::string name, std::string vorname, unsigned int alter)
	:name(name),
	vorname(vorname),
	alter(alter)
{}

void CPerson::print() 
{
	std::cout << this->name << " " << this->vorname << " is " << this->alter << " years old." <<std::endl;
}
 