#pragma once
#include "CSpieler.h"

enum e_starkerFuss { unKnown, links,  rechts, gleich};

class CFeldSpieler : public CSpieler
{
private:
	e_starkerFuss starkerFuss = unKnown;
	unsigned int verteidigung = 0;
	unsigned int ballBeherschung = 0;
	unsigned int schussKraft = 0;
	unsigned int schussGenauigkeit = 0;

public:
	CFeldSpieler(std::string name, std::string vorname, unsigned int alter, e_position position, unsigned int nummer);

	void setVerteidigung(unsigned int argVerteidigung);
	void setBallBeherschung(unsigned int argBallBeherschung);
	void setSchussKraft(unsigned int argSchussKraft);
	void setSchussGenauigkeit(unsigned int argSchussGenauigkeit);

	void print();
};
