#pragma once
#include "CPerson.h"
#include <vector>

const unsigned int maxAnzKader = 50;

class CKader
{
private:
	unsigned int anzKader;
	std::vector <CPerson>* pKaderMitglieder;

public:
	CKader() = default; //default constructor
	bool add(const CPerson& argCPerson);
	void print();
};