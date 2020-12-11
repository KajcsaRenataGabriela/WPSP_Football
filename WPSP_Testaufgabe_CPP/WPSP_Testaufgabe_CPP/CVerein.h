#pragma once
#include "CKader.h"
#include "CFuehrung.h"
#include <vector>

const unsigned int maxAnzFuehrung = 20;

class CVerein
{
private:
	unsigned int anzFuehrung;
	// CKader* pMyKader;
	std::vector<CKader>* pMyKader;
	std::vector<CFuehrung>* fuehrungMitglieder;

public:
	CVerein() = default; //default constructor
	bool add(const CFuehrung& argCFuehrung);
	bool add(const CKader& argCKader);
	void print();
};