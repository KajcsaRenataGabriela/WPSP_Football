#pragma once
#include "CPerson.h"

enum e_position { torwart, abwehr, mittelfeld, sturm};

class CSpieler : public CPerson
{
protected:
	e_position position;
	unsigned int nummer;

public:
	CSpieler(std::string name, std::string vorname, unsigned int alter, e_position position, unsigned int nummer);
	void print();
};