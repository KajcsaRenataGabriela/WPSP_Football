#pragma once
#include "CSpieler.h"

class CTorwart : public CSpieler
{
private:
	unsigned int strafRaumBeherrschung;
	unsigned int linienQualitaet;
	unsigned int abwehrKommunikation;

public:
	CTorwart(std::string name, std::string vorname, unsigned int alter, e_position position, unsigned int nummer);

	void setStrafRaumBeherrschung(unsigned int argStrafRaumBeherrschung);
	void setLinienQualitaet(unsigned int argLinienQualitaet);
	void setAbwehrKommunikation(unsigned int argAbwehrKommunikation);

	void print();
};