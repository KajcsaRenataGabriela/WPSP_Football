#include "CVerein.h"
#include <iostream>

bool CVerein::add(const CFuehrung& argCFuehrung)
{
	if (fuehrungMitglieder->size() + 1 < maxAnzFuehrung)
	{
		fuehrungMitglieder->push_back(argCFuehrung);
	}
	else
	{
		std::cout << "All leadership seats are taken." << std::endl;
		return false;
	}
}

bool CVerein::add(const CKader& argCKader)
{
	if (1)
	{
		pMyKader->push_back(argCKader);
	}
	else
	{
		std::cout << "Club is empty" << std::endl;
		return false;
	}
}

void CVerein::print()
{
	std::cout << "" << std::endl;
}
