#pragma once
#include "CPerson.h"

class CTrainer : public CPerson
{
private:
	unsigned int lizenzStufe = 0;

public:
	CTrainer(std::string name, std::string vorname, unsigned int alter); //constructor 

	void setLizenzStufe(unsigned int argLizenzStufe);

	void print();
	
};