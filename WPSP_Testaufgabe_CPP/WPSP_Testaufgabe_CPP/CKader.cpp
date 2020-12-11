#include "CKader.h"
#include <iostream>

bool CKader::add(const CPerson& argCPerson)
{
	if (pKaderMitglieder->size() + 1 < maxAnzKader)
	{
		pKaderMitglieder->push_back(argCPerson);
	}
	else
	{
		std::cout << "Football team membership is full." << std::endl;
		return false;
	}
}

void CKader::print()
{
	std::cout << "The member of the football team are:" << std::endl;

	for (auto it = pKaderMitglieder->begin(); it != pKaderMitglieder->end(); ++it)
	{
		std::cout << "aaa";
		it->print();
	}

}
