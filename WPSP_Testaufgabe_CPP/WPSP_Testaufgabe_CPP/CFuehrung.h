#pragma once
#include "CSpieler.h"
#include <string>

enum e_aufgabe { praesident, vostand, sportdirektor };

class CFuehrung : public CSpieler
{
private:
	e_aufgabe aufgabe;

public:
	CFuehrung(std::string name, std::string vorname, unsigned int alter, e_position position, unsigned int nummer, e_aufgabe aufgabe);

	void print();
};