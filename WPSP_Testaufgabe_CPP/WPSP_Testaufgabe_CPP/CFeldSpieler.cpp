#include "CFeldSpieler.h"
#include <iostream>

CFeldSpieler::CFeldSpieler(std::string name, std::string vorname, unsigned int alter, e_position position, unsigned int nummer)
	:CSpieler{ name, vorname, alter, position, nummer }
{
	starkerFuss = unKnown;
}

void CFeldSpieler::setVerteidigung(unsigned int argVerteidigung)
{
	verteidigung = argVerteidigung;
}

void CFeldSpieler::setBallBeherschung(unsigned int argBallBeherschung)
{
	ballBeherschung = argBallBeherschung;
}

void CFeldSpieler::setSchussKraft(unsigned int argSchussKraft)
{
	schussKraft = argSchussKraft;
}

void CFeldSpieler::setSchussGenauigkeit(unsigned int argSchussGenauigkeit)
{
	schussGenauigkeit = argSchussGenauigkeit;
}

void CFeldSpieler::print()
{
	std::cout << name << " " << vorname << " is " << alter << " years old. His position is " << position << ", his number is " << nummer << "."<< std::endl;
}